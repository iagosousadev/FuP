enum { max_lin = 60, max_col = 60 };

typedef struct {
	int m_v2m;
	int M_v2m;
	int m_m2v;
	int M_m2v;
}Regras;

typedef struct{
	int **data;
	int lin;
	int col;
} Matriz;

int is_alive(int);

int testar(Matriz* , int, int);

void transpor(Regras*, Matriz* , Matriz* , int, int);

void transpor_origem(Matriz* , Matriz* , int, int);

void imprimir_origem(Matriz* , int, int);

void processamento(Regras* ,Matriz* , Matriz* , int, int);

void carregar_arquivo(Matriz* , char*);

void modificar_regra(Regras*);

Matriz alocar_matriz();

void liberar_matriz(Matriz *);