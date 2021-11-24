%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tab_symboles.h"
#include "gencode.h"
#include "parser.h"
#include "option.h"
#include "tab_fonctions.h"

int yylex (void);
void vprint (int v);


void yyerror(const char*);
int yylex();
void lex_free();


%}

%union {
  int value;
  char* id;
  struct{ // si c'est pas un tab, nbdim = 0 et borneinfdim et tailledim = NULL. Pour rangelist, type = ""
    int* borneinfdim;
    int* tailledim;
    int nbdim;
    int type;
  } typevar;

  int index;

  struct{
    char** listeident;
    int nbident;
  } idlist;

  struct{
    int* listeexp;
    int nbexp;
  } explist;

}


%token <value> ENTIER BOOLEEN
%token <id> IDENT CHAINE
%token      INT BOOL UNIT ARRAY OF VAR PROG REF RET FUNCT
%token      IF THEN ELSE WHILE BEG END READ WRITE DO
%token      '\n' ';' ',' ':' EQ
%token      INF
%token      SUPP
%nonassoc   DIFF

%left       '+' '-' OR XOR
%left       '*' '/' AND
%left       '^'
%left		UMOINS
%left       NOT

%type <typevar> rangelist arraytype typename
%type <index> expr lvalue par atomictype
%type <explist> exprlist
%type <idlist> identlist

%start program

%%


program: {reset();} PROG IDENT vardecllist fundecllist {genbalise("main",0);} instr {gencode("exit",0,0,0);}            {;}
;

vardecllist: /* empty */                                                       {;} // rien
           |vardecl                                                            {;} // rien
           |vardecl ';' vardecllist                                            {;} // rien
;

vardecl: VAR identlist ':' typename                                            {for(int i = 0;i<$2.nbident;i++){ // Trouver comment mettre le nom de la fonction dans le cas o� vardecllist est dans funcdecllist
                                                                                 ts_ajouter(($2.listeident)[i],"GLOBAL",0,$4.nbdim,$4.borneinfdim,$4.tailledim,$4.type,0);
                                                                                }} // vérifier que le nom de var n'est pas déjà pris
;

identlist: IDENT                                                                {$$.listeident = malloc(sizeof(char*));                     // PENSER A FREE
                                                                                $$.listeident[0] = calloc(20, sizeof(char));
                                                                                $$.nbident = 1;
                                                                                $$.listeident[0] = strdup($1);}

          |IDENT ',' identlist                                                  {$$.nbident = $3.nbident + 1;
                                                                                $$.listeident = malloc($$.nbident*sizeof(char*));
                                                                                    for(int i=0;i<$3.nbident;i++){
                                                                                    ($$.listeident)[i] = calloc(20, sizeof(char));
                                                                                    ($$.listeident)[i] = strdup(($3.listeident)[i]);
                                                                                    }
                                                                                ($$.listeident)[$3.nbident] = strdup($1);}
;

typename: atomictype                                                            {$$.type = $1;
                                                                                $$.nbdim = 0;
                                                                                $$.borneinfdim = NULL;
                                                                                $$.tailledim = NULL;}

         | arraytype                                                            {$$.nbdim = $1.nbdim;
                                                                                $$.borneinfdim = malloc($$.nbdim*sizeof(int));
                                                                                $$.tailledim = malloc($$.nbdim*sizeof(int));
                                                                                for(int i=0;i<$1.nbdim;i++){
                                                                                    ($$.borneinfdim)[i] = ($1.borneinfdim)[i];
                                                                                    ($$.tailledim)[i] = ($1.tailledim)[i];
                                                                                }
                                                                                $$.type = $1.type;}
;

atomictype: UNIT {$$ = 2;}
           |BOOL {$$ = 1;}
           |INT  {$$ = 0;}
;

arraytype: ARRAY '[' rangelist ']' OF atomictype                                {$$.nbdim = $3.nbdim;
                                                                                $$.borneinfdim = malloc($$.nbdim*sizeof(int));
                                                                                $$.tailledim = malloc($$.nbdim*sizeof(int));
                                                                                for(int i=0;i<$3.nbdim;i++){
                                                                                    ($$.borneinfdim)[i] = ($3.borneinfdim)[i];
                                                                                    ($$.tailledim)[i] = ($3.tailledim)[i];
                                                                                }
                                                                                $$.type = $6;}
;

rangelist: ENTIER '.''.' ENTIER                                                 {$$.nbdim = 1;
                                                                                $$.borneinfdim = malloc(sizeof(int));
                                                                                $$.tailledim = malloc($$.nbdim*sizeof(int));
                                                                                ($$.borneinfdim)[0] = $1;
                                                                                if($4 > $1){($$.tailledim)[0] = $4 - $1 + 1;} //sinon : erreur
                                                                                $$.type = -1;}

          |ENTIER '.''.' ENTIER ',' rangelist                                   {$$.nbdim = $6.nbdim + 1;
                                                                                $$.borneinfdim = malloc($$.nbdim*sizeof(int));
                                                                                $$.tailledim = malloc($$.nbdim*sizeof(int));
                                                                                ($$.borneinfdim)[$6.nbdim] = $1;
                                                                                if($4 > $1){($$.tailledim)[$6.nbdim] = $4 - $1 + 1;} //sinon : erreur
                                                                                for(int i=0;i<$6.nbdim;i++){
                                                                                    ($$.borneinfdim)[i] = ($6.borneinfdim)[i];
                                                                                    ($$.tailledim)[i] = ($6.tailledim)[i];
                                                                                }
                                                                                $$.type = -1;}
;

fundecllist: /* empty */                                                        {;} // Rien il me semble
            |fundecl ';' fundecllist                                           {;} // idem
;

fundecl: FUNCT IDENT '(' parlist ')' ':' atomictype {ajout_fct($2, 0, NULL, $7);} {genbalise($2,0);} vardecllist instr     {;}
;

parlist: /* empty */                    {;} // $$.nb = 0
        |par                            {;} // $$.nb = 1
        |par ',' parlist                {;} // $$.nb++
;

par: IDENT ':' typename                 {;} // cr�er une variable, dans la table des symboles, (propre � la fontion) du nom IDENT du type typename (dans le MIPS), prete � �tre charg� lors de l'appel de fonction
    |REF IDENT ':' typename             {;} // pareil mais c'est par r�f�rence
;

instr: IF expA THEN instr B C                   {ts_supprtempo();}
     |IF expA THEN instr ELSE B instr C         {ts_supprtempo();}
     |WHILE D expE DO instr F                   {ts_supprtempo();}
     |lvalue EQ expr                            {int a = ts_type($1); int b = ts_type($3);
                                                if(a==b){gencode("aff1",$1,$3,0);}
                                                ts_supprtempo();} // Faire erreur sinon
     |RET expr                          {;} // var temp cr��e pour stocker le retour d'une fonction = $2.ptr; (v�rifier bon type de retour)
     |RET                               {;} // rien il me semble
     |IDENT '(' exprlist ')'            {;} // appel de fonction unit avec param ( charger param et v�rifier param, mettre un marqueur pour revenir apr�s l'appel, mettre dans les param ce marqueur pour completer le jump de la fonction, puis jump au marqueur de la fonction )
     |IDENT '(' ')'                     {;} // appel de fonction unit sans param ( sauf le marqueur )
     |BEG sequence END                  {;} // Mettre un marqueur au niveau du begin. Mettre un jump au niveau du end (la cible du jump est ind�termin�e, si c'est une fonction ca sera vers la ligne d'o� a �t� appel�e la fonction, si c'�tait un while, ca sera au d�but de la boucle sous condition, sinon pas de jump)
     |BEG END                           {;} // pareil
     |READ lvalue                       {gencode("read",$2,0,0);}
     |WRITE expr                        {gencode("write",$2,0,0);
                                        ts_supprtempo();}
;

expA: expr                              {gencode("A",$1,0,0);}
;
B: /* empty */                          {gencode("B",0,0,0);}
;
C: /* empty */                          {gencode("C",0,0,0);}
;
D: /* empty */                          {gencode("D",0,0,0);}
;
expE: expr                              {gencode("E",$1,0,0);}
;
F: /* empty */                          {gencode("F",0,0,0);}
;

sequence: instr ';' sequence        {;} // Je ne crois pas qu'il n'y ait quelque chose � faire l�
         |instr ';'                 {;}
         |instr                     {;}
;

lvalue: IDENT                       {$$ = get_index($1,"GLOBAL");}
       |IDENT '[' exprlist ']'      {;} // $$.ptr = $1.ptr + la valeur de $3 ( voir diapo sur les tableaux ) (detecter erreur OUT OF ARRAY)
;

exprlist: expr                      {$$.nbexp = 1;
                                    $$.listeexp = malloc(sizeof(int));
                                    ($$.listeexp)[0] = $1;}

         |expr ',' exprlist         {$$.nbexp = $3.nbexp + 1;
                                    $$.listeexp = malloc($$.nbexp*sizeof(int));
                                    for(int i=0;i<$3.nbexp;i++){
                                        ($$.listeexp)[i] = ($3.listeexp)[i];}
                                    ($$.listeexp)[$3.nbexp] = $1;}
;

expr: ENTIER                        {$$ = ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                    gencode("aff2",$$,$1,0);}
     | BOOLEEN                      {$$ = ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                    gencode("aff2",$$,$1,0);}
     | '(' expr ')'                 {$$ = $2;}

     | expr '+' expr                {int a = ts_type($1); int b = ts_type($3); // Faire erreur sinon
                                    if(a == 0 && b == 0){
                                        $$ = ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        gencode("add",$$,$1,$3);}
                                    }
     | expr '*' expr                {int a = ts_type($1); int b = ts_type($3);
                                    if(a == 0 && b == 0){
                                        $$ = ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        gencode("mul",$$,$1,$3);}
                                    }
     | expr '-' expr                {int a = ts_type($1); int b = ts_type($3);
                                    if(a == 0 && b == 0){
                                        $$ = ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        gencode("sub",$$,$1,$3);}
                                    }
     | '-' expr                     {int a = ts_type($2);
                                    if(a == 0){
                                        $$ = ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        gencode("sub",$$,0,$2);}
                                    }
     | expr '/' expr                {int a = ts_type($1); int b = ts_type($3);
                                    if(a == 0 && b == 0){
                                        $$ = ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        gencode("div",$$,$1,$3);}
                                    }
     | expr '^' expr                {int a = ts_type($1); int b = ts_type($3);
                                    if(a == 0 && b == 0){
                                        $$ = ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        gencode("pow",$$,$1,$3);}
                                    }
     | expr '<' expr                {int a = ts_type($1); int b = ts_type($3);
                                    if(a == 0 && b == 0){
                                        $$ = ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        gencode("slt",$$,$1,$3);}
                                    }
     | expr '>' expr                {int a = ts_type($1); int b = ts_type($3);
                                    if(a == 0 && b == 0){
                                        $$ = ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        gencode("slt",$$,$3,$1);}
                                    }
     | expr INF expr                {int a = ts_type($1); int b = ts_type($3);
                                    if(a == 0 && b == 0){
                                        $$ = ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        gencode("aff1",$$+1,$3,0);
                                        gencode("infe",$$,$1,$$+1);}
                                    }
     | expr SUPP expr                {int a = ts_type($1); int b = ts_type($3);
                                    if(a == 0 && b == 0){
                                        $$ = ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        gencode("aff1",$$+1,$1,0);
                                        gencode("infe",$$,$3,$$+1);}
                                    }
     | expr '=' expr                {int a = ts_type($1); int b = ts_type($3);
                                    if(a == 0 && b == 0){
                                        $$ = ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        gencode("aff1",$$+2,$1,0);
                                        gencode("aff1",$$+3,$3,0);
                                        gencode("infe",$$,$$+2,$3);
                                        gencode("infe",$$+1,$$+3,$1);
                                        gencode("and",$$,$$,$$+1);}
                                    }
     | expr DIFF expr                {int a = ts_type($1); int b = ts_type($3);
                                    if(a == 0 && b == 0){
                                        $$ = ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        ts_ajouter("tempo","GLOBAL",1,0,0,0,0,1);
                                        gencode("aff1",$$+2,$1,0);
                                        gencode("aff1",$$+3,$3,0);
                                        gencode("infe",$$,$$+2,$3);
                                        gencode("infe",$$+1,$$+3,$1);
                                        gencode("and",$$,$$,$$+1);
                                        gencode("nor",$$,$$,0);}
                                    }
     | expr AND expr                {int a = ts_type($1); int b = ts_type($3);
                                    if(a == 1 && b == 1){
                                        $$ = ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        gencode("and",$$,$1,$3);}
                                    }
     | expr OR expr                 {int a = ts_type($1); int b = ts_type($3);
                                    if(a == 1 && b == 1){
                                        $$ = ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        gencode("or",$$,$1,$3);}
                                    }
     | expr XOR expr                {int a = ts_type($1); int b = ts_type($3);
                                    if(a == 1 && b == 1){
                                        $$ = ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        gencode("xor",$$,$1,$3);}
                                    }
     |NOT expr                      {int a = ts_type($2);
                                    if(a == 1){
                                        $$ = ts_ajouter("tempo","GLOBAL",1,0,0,0,1,1);
                                        gencode("nor",$$,$2,0);}
                                    }

     | IDENT '(' exprlist ')'       {;} // Appel de fonction avec ces parametres (jump et load, verifier les param), mettre une marque pour revenir juste apr�s avec un jump, ex�cuter fonction, cr�er var temp pour stocker le retour (sauf si la fonction est de type unit)
                                    {;} // Lors de l'appel de la fonction, cr�er un marqueur et envoyer le nom du marqueur en parametre de la fonction pour ajuster son jump
     | IDENT '(' ')'                {genbalise($1,1);
                                    int a = fct_typeReturn($1);
                                    if(a != 2){
                                        $$ = ts_index();}}
     | IDENT '[' exprlist ']'       {$$ = get_index($1,"GLOBAL");
                                    ts_supprtempo();} // $$.ptr = $1.ptr + la valeur de $3 ( voir diapo sur les tableaux ) (detecter erreur OUT OF ARRAY)
     | IDENT                        {$$ = get_index($1,"GLOBAL");}
;

%%

void yyerror (const char *s) {
    fprintf(stderr, "[Yacc] error: %s\n", s);
}

int main(int argc, char * argv[])
{
		int valeur_parser = 0;
		if (argc>0)
		{
			valeur_parser = parser(argc, argv);
		}
		if (valeur_parser == -1)
		{
			return 0;
		}
		//#ifdef YYDEBUG // enlever les "//" pour afficher les étapes de lecture dnas le terminal
		//yydebug = 1;	// enlever les "//" pour afficher les étapes de lecture dnas le terminal
		//#endif				// enlever les "//" pour afficher les étapes de lecture dnas le terminal
    ts_init();
    yyparse();
		option(valeur_parser, argv);
		//printf("DONE\n");  // enlever les "//" pour afficher les étapes de lecture dnas le terminal
		return 0;
}
