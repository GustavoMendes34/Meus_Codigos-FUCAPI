// Questão 11
#include <stdio.h>

int main()
{
    int i = 1, valor;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &valor);

    while( i <= valor)
    {
        printf("%d ", i);
    }
    return 0;
}