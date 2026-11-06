#include <stdio.h>

int main()
{
    int numero, soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    while(numero != 0)
    {
        soma += numero;
        printf("Digite outro numero: ");
         scanf("%d", &numero);
         soma += numero;
    }
    printf("Soma: %d", soma);
    return 0;
}