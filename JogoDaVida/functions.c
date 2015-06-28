#include <stdio.h>
#include <stdlib.h>
#include "functions.h"


int is_alive(int elem){
	if(elem == 1) return 1;
	return 0;
}

int testar(Matriz * matriz, int i, int j){
	int vizinhos = 0;
	if(is_alive(matriz->data[i-1][j-1])) vizinhos++;
	if(is_alive(matriz->data[i-1][j])) vizinhos++;
	if(is_alive(matriz->data[i-1][j+1])) vizinhos++;
	if(is_alive(matriz->data[i][j-1])) vizinhos++;
	if(is_alive(matriz->data[i][j+1])) vizinhos++;
	if(is_alive(matriz->data[i+1][j-1])) vizinhos++;
	if(is_alive(matriz->data[i+1][j])) vizinhos++;
	if(is_alive(matriz->data[i+1][j+1])) vizinhos++;
	return vizinhos;
}

void transpor(Regras * regra, Matriz * origem, Matriz * destino, int i, int j){
	int vizinhos = testar(origem, i, j);

	if(is_alive(origem->data[i][j])){
		if(vizinhos >= regra->m_v2m && vizinhos <= regra->M_v2m){
			destino->data[i][j] = 1;
		} else {
			destino->data[i][j] = 0;
		}
	} else {
		if(vizinhos >= regra->m_m2v && vizinhos <= regra->M_m2v){
			destino->data[i][j] = 1;
		} else {
			destino->data[i][j] = 0;
		}
	}
}

void transpor_origem(Matriz * origem, Matriz * destino, int lin, int col){
	int i, j;
	for (i = 0; i < lin; i++){
		for(j = 0; j < col; j++){
			origem->data[i][j] = destino->data[i][j];
		}
	}
}

void imprimir_origem(Matriz * origem, int lin, int col){
	int i, j;
	for(i = 0; i < col; i++) printf(" _");

	printf("\n");
	
	for(i = 0;i < lin; i++){
		printf("| ");
		for (j = 0; j < col; ++j){
			if(origem->data[i][j] == 0) printf("  ");
			if(origem->data[i][j] == 1) printf("o ");
		}
		printf("| ");
		printf("\n");
	}
	for(i = 0; i < col; i++) printf(" _");
	printf("\n");
}

void processamento(Regras * regra, Matriz * origem, Matriz * destino, int lin, int col){
	int i, j;
	for(i = 0; i < lin; i++){
		for(j = 0; j < col; j++){
			transpor(regra, origem,destino, i, j);
		}
	}
	transpor_origem(origem, destino, lin, col);
}

void carregar_arquivo(Matriz * origem, char * arquivo){
	FILE * f = fopen(arquivo, "rt");
	fscanf(f, "%d", &origem->lin);
	fscanf(f, "%d", &origem->col);

	int i, j;
	for(i = 0; i < origem->lin; i++){
		for(j = 0; j < origem->col; j++){
			fscanf(f, "%d", &origem->data[i][j]);
		}
	}
}

void modificar_regra(Regras * regra){
	printf("Qual o valor minimo de vizinhos para a celula nao morrer por solidao? (Padrao: 2)\n");
	scanf("%d", &regra->m_v2m);
	printf("Qual o valor maximo de vizinhos para a celula na morrer por super-populacao? (Padrao: 3)\n");
	scanf("%d", &regra->M_v2m);
	printf("Qual o valor minimo de vizinhos para uma celula morta voltar a vida? (Padrao: 3)\n");
	scanf("%d", &regra->m_m2v);
	printf("Qual o valor maximo de vizinhos para uma celula morta voltar a vida? (Padrao: 3)\n");
	scanf("%d", &regra->M_m2v);
}

Matriz alocar_matriz(){
	int i;
	Matriz mat;
	mat.data = (int**)calloc(max_lin, sizeof(int));

	for(i = 0; i < max_lin; i++){
			mat.data[i] = (int*)calloc(max_col, sizeof(int));
	}

	return mat;
}

void liberar_matriz(Matriz * matriz){
	int i;
	for(i = 0; i < max_lin; i++){
			free(&matriz->data[i]);
	}
	free(&matriz->data);
}