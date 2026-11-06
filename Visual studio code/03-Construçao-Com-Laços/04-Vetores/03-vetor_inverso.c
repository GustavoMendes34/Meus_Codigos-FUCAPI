#include <stdio.h>

int main()
{
    int i, vetor[10];

    // Preenchendo o vetor
    printf("Preenchendo o vetor:\n");
    for(i = 0; i < 10; i++)
    {
        printf("vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    // 2º passo: Impressão Inversa
    for(i = 9; i >= 0; i--)
    {
        printf("%d ", vetor[i]);
    }
    
    return 0;
}