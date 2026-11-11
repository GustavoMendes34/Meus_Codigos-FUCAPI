#include <stdio.h>

int main()
{
    char nome[50];

    printf("Digite seu nome completo: ");
    // Armazena a string
    fgets(nome, 50, stdin);

    // Imprime a string
    fputs(nome, stdout);

    return 0;
}