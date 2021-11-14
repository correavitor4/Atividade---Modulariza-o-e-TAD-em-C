#include <stdlib.h>
#include <math.h>
#include "Ponto.h" //inclui os Prot�tipos

//Defini��o do tipo de dados
struct ponto{
  float *vec;
};
//Aloca e retorna um ponto com coordenadas "x" e "y"
Ponto* pto_cria(float *vect,int vecSize){
    //printf("Dimensão: %d\n",vecSize);
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    printf("\naaaa\n%d\naaaa\n",(vecSize)* (sizeof(float)));
    p->vec = (float*) malloc(vecSize*sizeof(float));
    printf("\n%d\n",sizeof(p->vec));

    if(p!=NULL){
        
        for(int i=0;i<vecSize;i++){  
            p->vec[i]=vect[i];
            
        }
    }
    
    return p;

}
//Libera a mem�ria alocada para um ponto
void pto_libera(Ponto* p){
    free(p);
}
//Recupera, por refer�ncia, o valor de um ponto
int pto_acessa(Ponto* p,float *vec){
    if(p == NULL)
        return 0;
        
    for(int i=0;i<sizeof(vec);i++){
        vec[i] = p->vec[i];
    }
    
    return 1;
}
//Atribui a um ponto as coordenadas "x" e "y"
int pto_atribui(Ponto* p,float *vec){
    if(p == NULL)
        return 0;
    for(int i=0;i<sizeof(vec);i++){
        p->vec[i]= vec[i];
    }
   
    return 1;
}
//Calcula a dist�ncia entre dois pontos
float pto_distancia(Ponto* p1, Ponto* p2){
    float aux=0;
    if(p1 == NULL || p2 == NULL)
        return -1;

    printf("%d",sizeof(p1->vec));
    for(int i=0;i<(sizeof(p1->vec)/sizeof(float));i++){
        printf("aaaa");
        aux+=pow((p2->vec[i]-p1->vec[i]),2);
        printf("\n%f\n",aux);
    }

    
    return sqrt(aux);
}
