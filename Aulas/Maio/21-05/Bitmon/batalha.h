#ifndef BATALHA_H
#define BATALHA_h
enum{max_bitmons = 10};

typedef struct{
	Bitmon vet[max_bitmons];
	int qtd_vivos;
	int round;
} Arena;

//cria os bitmons, inicia o round em round = 0;
void arena_iniciar(Arena * ar);

//faz todos lutarem
void arena_round(Arena * ar);

//retirar os mortos da arena
void arena_retirar_mortos(Arena * ar);

int arena_acabou_combate(Arena * ar);

void arena_mostrar(const Arena * ar);

Bitmon arena_pegar_vencedor(Arena * ar);

#endif