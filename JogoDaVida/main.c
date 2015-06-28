#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include "functions.h"

int main(){
	int opc = -1;
	Matriz mat;
	Matriz destino;
	Regras novaregra;

	mat = alocar_matriz();
	destino = alocar_matriz();

	novaregra.m_v2m = 2;
	novaregra.M_v2m = 3;
	novaregra.m_m2v = 3;
	novaregra.M_m2v = 3;

	int arq = -1;

	printf("Escolha a pattern desejado:\n1 - 10 roll\n2 - Light Weight Ship\n3 - Pulse\n4 - Small exploder\nDigite o numero da opcao desejada: ");
	scanf("%d", &arq);

	switch(arq){
		case 1:
			carregar_arquivo(&mat, "./Patterns/10roll.txt");
			break;
		case 2:
			carregar_arquivo(&mat, "./Patterns/lws.txt");
			break;
		case 3:
			carregar_arquivo(&mat, "./Patterns/pulse.txt");
			break;
		case 4:
			carregar_arquivo(&mat, "./Patterns/smallexploder.txt");
			break;
	}

	printf("Deseja modificar as regras ? (1 - sim 0 - nao): \n");
	scanf("%d", &opc);
	if(opc == 1){
		modificar_regra(&novaregra);
	}


	destino.lin = mat.lin;
	destino.col = mat.col;

	imprimir_origem(&mat, mat.lin, mat.col);

	opc = -1;
	while(opc != 0){
		printf("Quantas vezes deseja processar? (0 para sair): ");
		scanf("%d", &opc);
		
		int vezes;
		for(vezes = 0; vezes < opc; vezes++){
			processamento(&novaregra, &mat, &destino, mat.lin, mat.col);
			Sleep(500);
			system("cls");
			imprimir_origem(&mat, mat.lin, mat.col);
		}
		
	}

	liberar_matriz(&mat);
	liberar_matriz(&destino);
	return 0;
}