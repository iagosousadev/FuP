#include <stdio.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));
	int num = 0, x;
	char opc = 's', ganhou = 'f';
	while (opc == 's') {

		x = 1 + (rand() % 100);
		printf("%d\n", x);
		while (ganhou == 'f') {
			printf("Digite um numero: ");
			scanf("%d", &num);
			int dif = num - x;
			if (num == x){
				printf("Acertou!!!\n");
				ganhou = 't';
			}
			if ((num-x) >= 30){
				printf("Muito Maior!\n");
			}else if{
				(((num-x) > x) && (dif < 30)) printf("Maior\n");
			}else if{
				((num-x) <= -30) printf("Muito Menor!\n");
			}else if{
				(((num-x) < x ) && (dif > -30)) printf("Menor!\n");
			}
		}
		printf("Deseja jogar novamente?(s/n)\n");
		scanf("%c", &opc);
		if (opc == 's') ganhou = 'f';
	}

	return 0;
}