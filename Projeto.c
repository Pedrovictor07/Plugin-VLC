//Programa de Sugestões de  músicas//


#include <string.h>
#include <math.h>
#inlcude <stdio.h>
#include <time.h>
#include <stdlib.h>

enum Tipos {				//Generos musicais das músicas   //João Neto, existe ponteiro de Enum?//
	MPB,
	CLASSIC,
	POP,
	ROCK,
	COUNTRY,
	BREGA,
	FORRO,
	FUNK,
	DANCE,
};

struct Musica {				//Estrutura da música   //João Neto, como utilizar ponteiro de Struct?//
	char titulo[25];		//João Neto, como definir o tamanho do ponteiro de uma struct?//
	enum Tipos genero[20];
	float duracao;
	double horarioInicio;
};

struct MaisIndicacoes {		//Estrutura que vai pegar os dois generos mais escutados
	float porcentagem;
	enum Tipos generoM[20];
};

void contagem(int total, const enum Tipos **listaG, int **quant, struct Musica lista->genero){
	int i,j;
	for (i = 0; i < total; ++i){
		for (j = 0; j < 9; ++j){
			if (lista[i].genero == *listaG[j]){
				quant[j]++;
				break;
			}
		}
	}
}

void estatistica (int total, const int **quant, struct MaisIndicacoes resposta->porcentagem, struct MaisIndicacoes *resposta->generoM){	 //João Neto, como vamos definir qual é o maior?//
	int i;
	float *resultado[9]
	for (i = 0; i < 9; ++i){
		*resultado[i] = (*quant[i] / total) * 100;
	}
	for (i = 0; i < 9; i++){
		if (*resultado[i] > resposta[0]->porcentagem){
			resposta[0]->porcentagem = *resultado[i];
			if (i == 0){
				resposta[0]->generoM = MPB;
			}
			else if (i == 1){
				resposta[0]->generoM = CLASSIC;
			}
			else if (i == 2){
				resposta[0]->generoM = POP;
			}
			else if (i == 3){
				resposta[0]->generoM = ROCK;
			}
			else if (i == 4){
				resposta[0]->generoM = COUNTRY;
			}
			else if (i == 5){
				resposta[0]->generoM = BREGA;
			}
			else if (i == 6){
				resposta[0]->generoM = FORRO;
			}
			else if (i == 7){
				resposta[0]->generoM = FUNK;
			}
			else if (i == 8){
				resposta[0]->generoM = DANCE;
			}
		}
		else if (*resultado[i] < resposta[0]->porcentagem)||(*resultado[i] > resposta[1]->porcentagem){
			resposta[1]->porcentagem = *resultado[i];
			if (i == 0){
				resposta[1]->generoM = MPB;
			}
			else if (i == 1){
				resposta[1]->generoM = CLASSIC;
			}
			else if (i == 2){
				resposta[1]->generoM = POP;
			}
			else if (i == 3){
				resposta[1]->generoM = ROCK;
			}
			else if (i == 4){
				resposta[1]->generoM = COUNTRY;
			}
			else if (i == 5){
				resposta[1]->generoM = BREGA;
			}
			else if (i == 6){
				resposta[1]->generoM = FORRO;
			}
			else if (i == 7){
				resposta[1]->generoM = FUNK;
			}
			else if (i == 8){
				resposta[1]->generoM = DANCE;
			}
		}
	}
}