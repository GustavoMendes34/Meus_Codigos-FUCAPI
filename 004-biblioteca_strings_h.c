#include <stdio.h>
#include <string.h>

int main()
{
    char str[15] = "teste";
    char str1[100], str2[100];

    // Função strlen() - Tamanho da string
    printf("--Funcao strlen--\n");
    int tamanho = strlen(str);
    printf("Tamanho da string: %d\n", strlen(str));

    // Função strcpy - Cópia de Strings
    printf("--Funcao strcpy--\n");
    printf("Digite um texto qualquer: ");
    fgets(str1, 100, stdin);
    strcpy(str2, str1);
    printf("O valor da copia em str2: %s\n", str2);

    // Função strcat - Concatenação de Strings
    printf("--Funcao strcat--\n");
    char str3[15] = "Teste";
    char str4[15] = "Teste";
    strcat(str3, str4);
    printf("A concatenacao: %s\n", str3);

    // Função strcmp - Comparação de Strings
    printf("--Funcao strcmp--\n");
    int resultado = strcmp(str3, str4);
    if(resultado == 0) printf("Strings Iguais.\n");
    else printf("Strings Diferentes.\n");





    return 0;
}