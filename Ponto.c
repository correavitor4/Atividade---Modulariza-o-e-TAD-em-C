#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "Ponto.h" //inclui os Prot�tipos

//Defini��o do tipo de dados
struct ponto{
  float *vec;
};
//Aloca e retorna um ponto com coordenadas "x" e "y"
Ponto* pto_cria(float *vec,int vecSize){
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    //printf("\n%d\n",vecSize);
    p->vec = (float*) malloc(vecSize*sizeof(float));

    if(p != NULL){
        for(int i=0;i<(vecSize);i++){
            p->vec[i]=vec[i];
        }
    }
    return p;
}
//Libera a mem�ria alocada para um ponto
void pto_libera(Ponto* p){
    free(p);
}
// //Recupera, por refer�ncia, o valor de um ponto
// int pto_acessa(Ponto* p, float* x, float* y){
//     if(p == NULL)
//         return 0;
//     *x = p->x;
//     *y = p->y;
//     return 1;
// }
//Atribui a um ponto as coordenadas "x" e "y"
int pto_atribui(Ponto *p, float *vec){
    if(p == NULL)
        return 0;
    for(int i=0;i<(sizeof(p->vec)/sizeof(float));i++){
        p->vec[i]=vec[i];
    }
    return 1;
}
//Calcula a dist�ncia entre dois pontos
float pto_distancia(Ponto* p1, Ponto* p2,int vecSize){
    float temp=0;
    if(p1 == NULL || p2 == NULL)
        return -1;
    for(int i=0;i<vecSize;i++){
        
        temp+=pow(((p2->vec[i])-(p1->vec[i])),2);
        printf("\n%f\n",p2->vec[i]);
    }
    return sqrt(temp);
}
