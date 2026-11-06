#include <stdio.h>

int main()
{
    int numero, n1 = 0;
    printf("Digite um numero entre 3 e 18: ");
    scanf("%d", &numero);

    for (int i = 1; i <= 6; i++)
        for (int j = 1; i <= 6; j++)
         for (int k = 1; i <= 6; k++)
          for (int i + j + k == numero) n1++;

    printf("A probabilidade de sair %d e de %.2f%%\n", numero, (n1 / 216.0) * 100.0);

          return 0;
}