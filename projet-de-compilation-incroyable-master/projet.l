%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"

%}

ENTIER                                  [0-9]+
BOOLEEN                                 "true"|"false"
CHAINE                                  .*
IDENT                                   [a-zA-Z_]+[0-9a-zA-Z_]*
comSTART                                \(\*
comEND                                  \*\)

%%

{comSTART}{CHAINE}{comEND}              {;}
not                                     return NOT;
int		  			    		        return INT;
bool							        return BOOL;
unit							        return UNIT;
[+\-*/^<>=;,:\[\]\(\)]                  return yytext[0];

"<="                                    return INF;
">="                                    return SUPP;
"<>"                                    return DIFF;
":="                                    return EQ;
and                                     return AND;

or                                      return OR ;
xor                                     return XOR ;
if                                      return IF;
then						            return THEN;
else						            return ELSE;
while                                   return WHILE;
begin                                   return BEG;
end                                     return END;
read                                    return READ;
write                                   return WRITE;
function                                return FUNCT;
array                                   return ARRAY;
of                                      return OF;
do                                      return DO;
var                                     return VAR;
program                                 return PROG;
ref                                     return REF;
return                                  return RET;

[ \t\n\r]                                 {;}

{BOOLEEN}                               { if ( strcmp(yytext,"true") == 0 ) {
                                             yylval.value = 1;}
                                         else {
                                             yylval.value = 0;}
                                         return BOOLEEN;
                                        }

{IDENT}                                 {   yylval.id = strdup(yytext);
                                            return IDENT;
                                        }
{ENTIER}                                  { yylval.value = atoi(yytext);
                                          return ENTIER;
                                        }


.                                       fprintf(stderr, "Unknown character : (%d) ignored \n", yytext[0]);
%%


void lex_free() {
  yy_delete_buffer(YY_CURRENT_BUFFER);
  free(yy_buffer_stack);
}
