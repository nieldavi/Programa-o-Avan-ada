#ifndef RESPOSTA_C_INCLUDED
#define RESPOSTA_C_INCLUDED



#endif // RESPOSTA_C_INCLUDED
#include <stdio.h>
#include <time.h>

int comparar(const void *a, const void *b){ // função de comparação nessária para função qsort
    if (*(int *)a == *(int*)b){ //Comparação de igualdade entre elementos do vetor
        return 0; // retorna 0;
    }else{
        if(*(int *)a < *(int*)b){ /// se a for menor que b, retorna -1
            return -1;
        }else{
            return 1; // se não retorna 1
        }
    }
}

int main(){
    float tempo;
    time_t t_inicial, t_final;

    int i, j;
    float *p; //ponteiro
    int n; //variaveis necessárias

    printf("Tamanho de vetor: ");
    scanf("%d",&n);

    /// contando o tempo da questão 14
    t_inicial = time(NULL);

    p = (float*) malloc(n*sizeof(float));

    for(int i=0;i<n;i++){
          scanf("%f",&p[i]);
      }

    qsort(p,n,sizeof(float), comparar);

    for(int i=0;i<n;i++){
    printf("%.2f ",p[i]);

    }
    free(p);
    t_final= time(NULL);

    tempo = difftime(t_final, t_inicial) ;

    printf("tempo de execução %f", tempo);

    /// contando o tempo de execução da questão 15
    t_inicial = time(NULL);
    int vet[10] = {12,1,0,3,13,4,5,67,1,3};
    qsort(vet, 20, sizeof(int), comparar);



    printf("\nvetor:");
    for(int i =0; i<10; i++){
        printf(" %d ", vet[i]);
    }


    t_final= time(NULL);

    tempo = difftime(t_final, t_inicial) ;

    printf("tempo de execução %f", tempo);

    return 0;

    /// A questão 15 tem tempo de execução mais rápida que a questão 14

}
