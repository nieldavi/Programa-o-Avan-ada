#ifndef RESPOSTA_C_INCLUDED
#define RESPOSTA_C_INCLUDED



#endif // RESPOSTA_C_INCLUDED
#include <stdio.h>
int main(){
    int i=3,j=5;
    int*p, *q;
    p = &i;// endereço de onde está guardado a variaval i
    q = &j;// endereço de onde está guardado a variaval i
    p == &i;//comparando o ponteiro p com o endreço da variavel j, imprime 0
    *p - *q; // operação de subtração de valores *p- *q (3-5) = -2
    **&p; //valor de i
    printf("%d",3- *p/ (*q) +7); //






    return 0;
}
