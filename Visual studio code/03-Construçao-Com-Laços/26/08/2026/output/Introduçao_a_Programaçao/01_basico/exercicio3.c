#include <stdio.h> 

int main(){
    int A, B, C, D, E;
    int pares = 0, impares = 0, positivas = 0, negativos = 0;
    printf("Digite 5 valores inteiros: ");
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    scanf("%d", &E);
    if (A % 2 == 0) pares ++;
    else impares ++;
    if(A >= 0) positivos ++;
    else neativos ++;

    // Repetir para as demais variaveis

    printf("Qt de Pares %d\n", pares);
    printf("Qt de Impares %d\n", impares);
    printf("Qt de Positivos %d\n", positivas);
    printf("Qt de Negativos %d\n", neativos);

    return 0;
}