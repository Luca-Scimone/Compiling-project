#ifndef tab_symboles_H
#define tab_symboles_H

//fonction d'initialisation de la table des symboles
void ts_init() ;

//fonction qui met a zero l'index de l'adressage mémoire (fonction utilisée en début de fonction)
void init_adr_mem(int N) ;

// ajout variable dans la table des symboles
int ts_ajouter(char* nom, char* function, int is_init, int nb_dim, int* bordim, int* taildim, int type, int est_tempo) ;

// supprimer variable dans la table de symboles (pas de désallocation)
void ts_depile() ;
void ts_supprtempo();

/*  GETTERS  */ 

int get_index(char * nom, char * func) ; // retourne l'adrresse mémoire puisque l'index est pareil que l'index mémoire 
int ts_type(int index);
int ts_addr(char * nom, char * func) ; // retourner adresse mémoire variable (retourne -1 si la variable n'existe pas) 
int est_initialise(char * nom, char * func) ;
int dim_tableau(char * nom, char * fonction) ;
void affiche_tableau();
int ts_index();

/*  SETTERS  */  
void ts_initial(char * nom, char * fonction) ;
#endif