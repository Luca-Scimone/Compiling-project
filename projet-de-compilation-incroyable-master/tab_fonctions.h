#ifndef tab_fonctions_H
#define tab_fonctions_H

void tf_init() ;

int fct_exist(char* nom, int nb_args, int* typeArgs, int typeReturn);

int fct_trouve(char* nom);

int fct_typeReturn(char* nom);

void ajout_fct(char* nom, int nb_args, int* typeArgs, int typeReturn);

#endif