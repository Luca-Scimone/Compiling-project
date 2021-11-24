#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

int parser(int argc, char ** argv)
{
	int valeur_retour = 0;
	for(int i = 1; i < argc; i++)
	{
		if (strcmp(argv[i],"-version") == 0)
		{
			printf("\nFait par : DUCRUE Alexis, SCIMONE Luca, PERREL Hyacinthe, BERTHAULT Dylan\n\n");
		}
		else if (strcmp(argv[i],"-tos") == 0)
		{
			valeur_retour += 10;
		}
		else if (strcmp(argv[i],"-o") == 0)
		{
			if (argv[i+1] == NULL)
			{
				printf("Il manque le nom du fichier de sortie\n");
			}
		}
		else if (strcmp(argv[i-1],"-o") == 0)
		{
			valeur_retour += i;
		}
		else if (strncmp(argv[i], "-", 1) != 0)
		{
			struct stat file_info;
			lstat(argv[i], &file_info);
			if ((file_info.st_mode & S_IFMT) == S_IFREG)
			{
				FILE * fp = fopen(argv[i], "r");
				stdin = fp;
			}
			else
			{
				printf("L'argument n'est pas un fichier\n");
				return -1;
			}
			FILE * fp = fopen(argv[i], "r");
			stdin = fp;
		}
		else if (strncmp(argv[i], "-", 1) == 0)
		{
			printf("Option non disponible\n");
			return -1;
		}
	}
	return valeur_retour;
}
