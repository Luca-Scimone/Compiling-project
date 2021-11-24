#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> 

#include "tab_fonctions.h"

#define TAILLE 1024

struct  tf_parametres 
{
    char* nom;
    int nb_args ;
    int* typeArgs;
    int typeReturn;
} ; 


// voir taille si changement actuellement 1024
int index_tf ; 
struct tf_parametres table_fonctions[TAILLE] ; 


// fonction qui met a 0 l'index
void tf_init() 
{ 
    index_tf = 0 ; 
}

/* 
 * tester existance fonction avec le nombre d'arguments en question
 * returne 0 si elle n'existe pas , 
 *         1 si elle existe deja, 
 *         2 si elle existe mais avec un autre nombre d'arguments
 */
int fct_exist(char* nom, int nb_args, int * typeArgs, int typeReturn) 
{
    int i ;
    int res = 0 ;
    for(i = 0 ; i < index_tf ; i++) 
    {
        if (strcmp(nom, table_fonctions[i].nom) == 0)
        { 
            res = 2 ; 
            if(table_fonctions[i].nb_args == nb_args) 
            {
                res = 1 ; 
            }
        }
    }
    return res ; 
}

int fct_trouve(char* nom) {
    int i;
    int res = 0;
    for (i = 0; i < index_tf; i++)
    {
        if (strcmp(nom, table_fonctions[i].nom) == 0)
        {
            res = i;
        }
    }
    return res;
}

int fct_typeReturn(char* nom) {
    int num = fct_trouve(nom);
    return table_fonctions[num].typeReturn;
}

// ajout d'une fonction 
void ajout_fct(char* nom, int nb_args, int* typeArgs, int typeReturn)
{
    if (fct_exist(nom, nb_args, typeArgs, typeReturn) == 1) 
    {
        perror("La fonction existe déjà");
    } 
    else if (fct_exist(nom, nb_args, typeArgs, typeReturn) == 2) 
    {
        perror("La fonction a déjà été déclarée avec un nombre d'argument différent\n");
    } 
    else 
    { 
        table_fonctions[index_tf].nom = nom ; 
        table_fonctions[index_tf].nb_args = nb_args ;
        table_fonctions[index_tf].typeArgs = typeArgs;
        table_fonctions[index_tf].typeReturn = typeReturn;
        index_tf++ ;
    }
}

