#include <stdio.h>
#include <time.h>
#include "bitmon.h"

Bitmon bit_criar(const char *nome, int forca, int vida, int ataques, int raiva){
	Bitmon bit_aux = {*nome, forca, vida, ataques, raiva};
	return bit_aux;
}

int random(int x, int y){
	srand(time(NULL));
	return x + rand() % (y-x+1);


Bitmon bit_criar_random(char *nome){
	Bitmon bit_aux;
	bit_aux.nome = nome
	bit_aux.forca = random(max_forca/2, max_forca);
	bit_aux.vida = random(max_vida/2, max_vida);
	bit_aux.max_ataques = random(max_ataques/2, max_ataques);
	bit_aux.ataques = bit_aux.max_ataques;
	bit_aux.raiva = random(max_raiva/2, max_raiva);
	return bit_aux;
}

void bit_lutar(Bitmon * a, Bitmon * b){
	if (a->ataques > 0 && a->vida > 0 && b->vida > 0){
		b->vida -= a->forca;
		a->ataques--;
	}
	if (b->ataques == 0){
		b->forca += b->raiva;
	} else{
		a->vida -= b->forca;
		b->ataques--;
	}
}

void bit_mostrar(Bitmon * bit){
	printf("Nome = %s, Forca = %d, Vida = %d, Ataques = %d, Raiva = %d",
			bit->nome, bit->forca, bit->vida, bit->ataques, bit->raiva);
}
