#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int numero = 0;
int nombre_boucle_en_cours = 0;
int numero_plus_grand = 0;
int nouv_boucle_preced = 0;

int numero_boucle(int nouv_boucle)
{
	if (nouv_boucle == 1) {
		if (nouv_boucle_preced == -1) {
			numero_plus_grand += 1;
			numero = numero_plus_grand;
			nombre_boucle_en_cours += 1;
			nouv_boucle_preced = nouv_boucle;
			return numero;
		}
		else {
			numero += 1;
			nombre_boucle_en_cours += 1;
			numero_plus_grand += 1;
			nouv_boucle_preced = nouv_boucle;
			return numero;
		}
	}
	nouv_boucle_preced = nouv_boucle;
	if (nouv_boucle == 0) {
		return numero;
	}
	if (nouv_boucle == -1) {
		int tempo = numero;
		if (nombre_boucle_en_cours != 1) {
			numero -= 1;
			nombre_boucle_en_cours -= 1;
			return tempo;
		}
		numero = numero_plus_grand;
		return tempo;
	}
	return 0 ;
}
