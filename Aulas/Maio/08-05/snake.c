#include <stdio.h>

// direcoes
//d = direita
//e = esquerda
//c = cima
//b == baixo
void mostrar(int x, int y, char direcao){
	printf("x = %d, y = %d, direcao = ", x, y);
	switch (direcao){
		case 'd':
			printf("direita");
			break;
		case 'e':
			printf("esquerda");
			break;
		case 'c':
			printf("cima");
			break;
		case 'b':
			printf("baixo");
			break;
	}
	printf("\n");

}


void andar(int *ex, int *ey, char direcao) {
	switch (direcao){
		case 'd':
			*ex = *ex + 1;
			break;
		case 'e':
			*ex = *ex - 1;
			break;
		case 'c':
			*ey = *ey - 1;
			break;
		case 'b':
			*ey = *ey + 1;
			break;

	}
}

main () {
	int x = 5, y = 7;
	char dir = 'd';

	mostrar(x, y, dir);
}