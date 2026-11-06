#include <stdio.h>

int main()
{
    int vetor[5];
    int i, soma = 0;

    // Preenchendo o vetor
    printf("Preenchendo o vetor\n");
    for(i = 0; i < 5; i++)
    {
        printf("vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }
    printf("Valor da soma eh: %d\n", soma);

    return 0;
}