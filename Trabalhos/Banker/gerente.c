#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void limpar_tela(){
	system("cls");
}

int main() {
	char * senhaAtual = "aiquedelicia";
	char senha[20];

	printf("##########################################################\n");
	printf("#             Ola, gerente, digite sua senha:            #\n");
	printf("##########################################################\n");
	scanf("%s", senha);
	if(!strcmp(senha, senhaAtual)){
		limpar_tela();
		printf("##########################################################\n");
		printf("#          Senha correta, entrando no sistema...         #\n");
		printf("##########################################################\n");	
		system("pause");
		limpar_tela();
		printf("##########################################################\n");
		printf("#      Bem Vindo, Administrador, o que deseja fazer?     #\n");
		printf("##########################################################\n");
		printf("#   1 - Cadastrar cliente                                #\n");
		//printf("#   2 - Remover cliente                                  #\n");
		//printf("#   3 - Conceder credito                                 #\n");
		//printf("#   4 - Consultar status de cliente                      #\n");
		printf("##########################################################\n");
		limpar_tela();
	}
	return 0;
}