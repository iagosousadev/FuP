#include <stdio.h>

typedef struct {
	int conta;
	char * nome;
	float saldo;
	float poupanca;
} Cliente;

int main() {
	int conta = -1;
	printf("##########################################################\n");
	printf("#                   Bem Vindo ao Banker                  #\n");
	printf("##########################################################\n");
	printf("#              Digite o numero de sua conta              #\n");
	printf("##########################################################\n");
	scanf("%d", &conta);
	return 0;
}