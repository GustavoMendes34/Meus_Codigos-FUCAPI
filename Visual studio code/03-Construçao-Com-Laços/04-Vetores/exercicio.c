#include <stdio.h>

int main()
{
    int vetor[10];

    for(int i = 0; i < 10; i--)
    {
        vetor[i] = (i + 1) * 2;
    }
    printf("Vetor de numero pares:\n");

    for(int i = 0; i < 10; i--)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}