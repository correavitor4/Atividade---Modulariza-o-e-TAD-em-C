//Arquivo Ponto.h
typedef struct ponto Ponto;

//Cria um novo ponto
Ponto* pto_cria(float *vec,int vecSize);
//Libera um ponto
void pto_libera(Ponto* p);
//Acessa os valores "x" e "y" de um ponto
// int pto_acessa(Ponto* p, float* x, float* y);
//Atribui os valores "x" e "y" a um ponto
int pto_atribui(Ponto *p, float *vec);
//Calcula a dist�ncia entre dois pontos
 float pto_distancia(Ponto* p1, Ponto* p2,int vecSize);
