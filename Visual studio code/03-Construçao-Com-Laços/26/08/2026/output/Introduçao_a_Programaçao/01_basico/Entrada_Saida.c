#include <stdio.h>

int main()
{
    int numero_inteiro;
    float numero_real;
    char caractere;
    char nome [100];

    // Lendo uma variavel do tipo caractere (cadeia)
    printf("Digite seu nome completo: ");
    scanf(" %s" , nome);

    // Lendo uma variavel de tipo inteiro
    printf("Digite sua idade: ");
    scanf("%d" , &numero_inteiro);
 
    // Lendo uma variavel de tipo Real
    printf("Digite sua altura: ");
    scanf("%f" , &numero_real);

    // Lendo uma variavel de tipo caractere
    printf("Digite seu sexo (M ou F): ");
    scanf(" %c" , &caractere);



    // Resumo das informaçoes
    printf("==== RESUMO ====\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", numero_inteiro);
    printf("Altura: %.2f\n", numero_real);
    printf("Sexo: %c\n", caractere);
    printf("==== ==== ====");


    return 0;
}
