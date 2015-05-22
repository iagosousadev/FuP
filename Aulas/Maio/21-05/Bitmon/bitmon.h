#ifndef BITMON_H
#define BITMON_H

enum{max_forca = 20, max_vida = 200, max_raiva = 10, max_ataques = 5};

typedef struct{
	char *nome;
	int forca;
	int vida;
	int ataques;
	int raiva;
	int max_ataques;
} Bitmon;

Bitmon bit_criar(char*, int, int, int, int, int);
Bitmon bit_criar_random();
void bit_lutar(Bitmon *, Bitmon *);
void bit_mostrar(Bitmon *, Bitmon *);