#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "numero_boucle.h"

void genbalise(char* nom, int op) {
    FILE* fp;
    fp = fopen("result.s", "a+");

    if (op == 0) {
        fprintf(fp, "%s :\n", nom);
    }
    else if (op == 1) {
        fprintf(fp, "jal %s\n", nom);
    }

    fclose(fp);
}

void reset() {
    remove("result.s");
}

void gencode(char* op, int v1, int v2, int v3)
{
    FILE* fp;
    fp = fopen("result.s", "a+");

    fprintf(fp, "#%s\n", op);

    if (strcmp(op, "add") == 0 || strcmp(op, "mul") == 0 || strcmp(op, "sub") == 0 || strcmp(op, "div") == 0 ||
        strcmp(op, "and") == 0 || strcmp(op, "or") == 0 || strcmp(op, "xor") == 0 || strcmp(op, "slt") == 0) {
        fprintf(fp, "%s $%d $%d $%d\n", op, v1, v2, v3);
    }

    else if (strcmp(op, "pow") == 0) {
				fprintf(fp, "li $%d 1\n", v1);
				fprintf(fp, "beqz $%d fin%d\n",v3, numero_boucle(1));
				fprintf(fp, "move $%d $%d\n",v1, v2);
				fprintf(fp, "sub $%d $%d 1\n",v3, v3);
				fprintf(fp, "loop%d : blt $%d 1 fin%d\n", numero_boucle(0), v3, numero_boucle(0));
				fprintf(fp, "mul $%d $%d $%d\n", v1, v1, v2);
				fprintf(fp, "sub $%d $%d 1\n", v3, v3);
				fprintf(fp, "b loop%d\n", numero_boucle(0));
				fprintf(fp, "fin%d :\n", numero_boucle(-1));
    }
    else if (strcmp(op, "nor") == 0) {
        fprintf(fp, "%s $%d $%d $%d\n", op, v1, v2, v3);
        fprintf(fp, "addi $%d $%d 2\n", v1, v1);
    }
    else if (strcmp(op, "infe") == 0) {
        fprintf(fp, "addi $%d $%d 1\n", v3, v3);
        fprintf(fp, "slt $%d $%d $%d\n", v1, v2, v3);
    }
    else if (strcmp(op, "write") == 0) {
        fprintf(fp, "move $4 $%d\n", v1);
        fprintf(fp, "li $2 1\n");
        fprintf(fp, "syscall\n");
    }
    else if (strcmp(op, "read") == 0) {
        fprintf(fp, "li $v0 5\n");
        fprintf(fp, "syscall\n");
        fprintf(fp, "move $%d $v0\n", v1);
    }

    else if (strcmp(op, "aff1") == 0) {
        fprintf(fp, "move $%d $%d\n", v1, v2);
    }
    else if (strcmp(op, "aff2") == 0) {
        fprintf(fp, "li $%d %d\n", v1, v2);
    }
    else if (strcmp(op, "exit") == 0) {
        fprintf(fp, "li $v0 10\nsyscall\n");
    }
    else if (strcmp(op, "return") == 0) {
        fprintf(fp, "j $ra\n");
    }
    else if (strcmp(op, "A") == 0) {
        fprintf(fp, "beqz $%d else%d\n", v1, numero_boucle(1));
    }
    else if (strcmp(op, "B") == 0) {
        fprintf(fp, "j fin%d\n", numero_boucle(0));
        fprintf(fp, "else%d :\n", numero_boucle(0));
    }
    else if (strcmp(op, "C") == 0) {
        fprintf(fp, "fin%d :\n", numero_boucle(-1));
    }
    else if (strcmp(op, "D") == 0) {
        fprintf(fp, "debutwhile%d :\n", numero_boucle(1));
    }
    else if (strcmp(op, "E") == 0) {
        fprintf(fp, "beqz $%d finwhile%d\n", v1, numero_boucle(0));
    }
    else if (strcmp(op, "F") == 0) {
        fprintf(fp, "j debutwhile%d\n", numero_boucle(0));
        fprintf(fp, "finwhile%d :\n", numero_boucle(-1));
    }

    fclose(fp);
}
