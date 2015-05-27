#include <stdio.h>
#include <string.h>

int main() {
	int n, i, j;
	scanf("%d", &n);

	char nomes[n][50];
	float notas[n];

	for(i = 0; i < n; i++){
		scanf("%s", nomes[i]);
	}

	for(i = 0; i < n; i++){
		scanf("%f", &notas[i]);
	}

	for(i = 0; i < n; i++)
		for(j = i+1; j < n; j++)
			if(notas[i] < notas[j]){
				int aux = notas[i];
				notas[i] = notas[j];
				notas[j] = aux;
				char auxs[50];
				strcpy(auxs, nomes[i]);
				strcpy(nomes[i], nomes[j]);
				strcpy(nomes[j], auxs);
			}

	for(i = 0; i < n; i++){
		printf("%s: %.2f\n", nomes[i], notas[i]);
	}
	return 0;
}