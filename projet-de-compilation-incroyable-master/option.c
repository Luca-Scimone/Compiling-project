#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "tab_symboles.h"

int option(int valeur_parser, char ** argv)
{
	if (valeur_parser >= 10)
	{
		fclose(fopen("log_tableau.txt", "w"));
		affiche_tableau();
		FILE * fp = fopen("log_tableau.txt", "r");
		while (!feof(fp))
		{
			fputc(fgetc(fp), stdout);
		}
		fclose(fp);
	}
	if (valeur_parser > 0 && valeur_parser < 10)
	{
		char * new_filename = argv[valeur_parser];
		strcat(new_filename, ".s");
		if (rename("result.s", new_filename) != 0)
		{
			printf("Echec : impossible de renommer le fichier\n");
		}
	}
	if (valeur_parser > 10)
	{
		char * new_filename = argv[valeur_parser - 10];
		strcat(new_filename, ".s");
		if (rename("result.s", new_filename) != 0)
		{
			printf("Echec : impossible de renommer le fichier\n");
		}
	}
	return 0 ;
}
