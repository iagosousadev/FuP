#include <stdio.h>

int main() {
	char linha[100] = "50; 4.35;";

	char produto[50];
	int qtd;
	float preco;
	(void)produto;
	sscanf(linha, "%d %f", &qtd, &preco);
	printf("%d %.2f\n", qtd, preco);

	return 0;
}