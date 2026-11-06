#include <stdio.h>

int main()
{
    int numero, numeroSecreto = 2468;

    while (1)
    {
        printf("Digite o numero secreto: ");
        scanf("%d", &numero);

        if(numero < numeroSecreto) printf("Menor que o numero secreto.\n");
        else if(numero > numeroSecreto) printf("Maior que o numero secreto.\n");
        else break;
    }

    printf("Parabens voce acerou o numero secreto!!!\n");
    
    return 0;
}