#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "tab_symboles.h"
#define TAILLE 1024 // taille limiter à 1024 voir si besoin de plus grand ?

// Tableau des symboles -> 4 paramètres : nom, initialisé ? , adresse mémoire
struct ts_parametres
{
	char * nom ;
  	char * fonction ; // fonction à laquelle la variable est associée
	int est_initialise ;
	int nb_dimension;
	int* borneinfdim;
	int* tailledim;
	int adrMem ;   // l'index correspond à l'adresse mémoire
	int type;
	int est_tempo;
} ;

int index_tab ;
int index_adr_mem ;
struct ts_parametres table_symboles[TAILLE];


// ajout dans table des symboles
//(mettre 0 à tout les attribut concernant le tableau si ce n'est pas un tableau)
int ts_ajouter(char * name, char * function , int is_init, int nb_dim, int * bordim, int * taildim,int type,int est_tempo)
{
	if (nb_dim != 0) {
		int nbelem = 1;
		for (int i = 0; i < nb_dim; i++) {
				nbelem = nbelem * taildim[i];
		}
		for (int i = 0; i < nbelem; i++) {
			ts_ajouter(name, function, 0, 0, 0, 0, type, 0);
		}
	}
	else {
		table_symboles[index_tab].nom = name;
		table_symboles[index_tab].fonction = function;
		table_symboles[index_tab].est_initialise = is_init;
		table_symboles[index_tab].nb_dimension = nb_dim;
		table_symboles[index_tab].borneinfdim = bordim;
		table_symboles[index_tab].tailledim = taildim;
		table_symboles[index_tab].type = type;
		table_symboles[index_tab].est_tempo = est_tempo;
		table_symboles[index_tab].adrMem = index_adr_mem;

		index_tab++;
		index_adr_mem++;
	}
	return (index_tab - 1);
}
// On intitialise le tableau en mettant à l'index 0 la VAR_ZERO
void ts_init()
{
	index_tab = 0 ;
	index_adr_mem = 0 ;
	memset(table_symboles, 0 , TAILLE*sizeof(struct ts_parametres)) ;
	ts_ajouter("VAR_ZERO", "GLOBAL", 1, 0, 0, 0,0,0);
	ts_ajouter("VAR_AT", "GLOBAL", 1, 0, 0, 0, 0,0);
	ts_ajouter("VAR_V0", "GLOBAL", 1, 0, 0, 0,0,0);
	ts_ajouter("VAR_V1", "GLOBAL", 1, 0, 0, 0,0,0);
	ts_ajouter("VAR_A0", "GLOBAL", 1, 0, 0, 0, 0,0);
	ts_ajouter("VAR_A1", "GLOBAL", 1, 0, 0, 0, 0,0);
	ts_ajouter("VAR_A2", "GLOBAL", 1, 0, 0, 0, 0,0);
	ts_ajouter("VAR_A3", "GLOBAL", 1, 0, 0, 0, 0,0);
}

//fonction qui met a zero l'index de l'adressage mémoire (fonction utilisée en début de fonction) voir si utile ?
void init_adr_mem(int N)
{
	index_adr_mem = N ;
}

void ts_depile()
{
	if (index_tab == 1)
	{
		perror("Erreur table symbole : Action dépiler impossible\n");
		return;
	}
	index_tab-- ;
	index_adr_mem-- ;
}


//fonction pour récupérer les informations

// retourner index  mémoire variable
// retourne -1 si la variable n'existe pas
int get_index(char * nom, char * fonction)
{
  int i ;
  int ind = -1 ;
  for(i = 0 ; i < index_tab ; i++)
  {
    if (strcmp(table_symboles[i].nom,nom) == 0 && ( strcmp(table_symboles[i].fonction,fonction) == 0 ||  strcmp(table_symboles[i].fonction, "GLOBAL") == 0  ))
	{
      ind = i ;
    }
  }
  return ind ;
}

// retourner adresse mémoire variable
// retourne -1 si la variable n'existe pas
int ts_addr(char * nom, char * fonction)
{
	int adr ;
	int i = get_index(nom,fonction) ;
	if (i == -1)
  	{
		adr = -1 ;
	}
	else
	{
		adr = table_symboles[i].adrMem ;
	}
  	return adr ;
}

//On vérifie que la  variable est bien initialisé ou pas
int est_initialise(char * nom, char * fonction)
{
  return table_symboles[get_index(nom,fonction)].est_initialise ;
}

//La dimension du tableau est stocké dans la première valeurs du tableau
//et donne la dimesion dans laquel il est
int dim_tableau(char * nom, char * fonction)
{
	return table_symboles[get_index(nom,fonction)].nb_dimension;
}

// initialisation lorsq'on initialise une variable on le note
void ts_initial(char * nom, char * fonction)
{
  table_symboles[get_index(nom,fonction)].est_initialise = 1 ;
}

int ts_type(int index)
{
	return table_symboles[index].type;
}

int ts_index()
{
	return index_tab - 1;
}

void affiche_tableau()
{
	FILE* inputFile;
	inputFile = fopen("log_tableau.txt", "a");
	if (inputFile == NULL)
	{
		fprintf(stderr, "Cannot open file %s\n", "log_tableau.txt");
		exit(0);
	}
	int i;
	fprintf(inputFile, "Nom    -   Fonction    -    Initialise    -    Adresse    -    estTempo\n");
	for (i = 0; i < index_tab; i++)
	{
		fprintf(inputFile, "%s  -  %s  -    %d     -     %d     -   %d \n",
        table_symboles[i].nom, table_symboles[i].fonction, table_symboles[i].est_initialise,
        table_symboles[i].adrMem,table_symboles[i].est_tempo);
		fprintf(inputFile, "\n");
	}
    fclose(inputFile);
}


void ts_supprtempo()
{
	while (table_symboles[index_tab-1].est_tempo == 1) {
		ts_depile();
	}
}
