#include <stdio.h>
#define TAMANHO 50

int main()
{
    char palavra1[TAMANHO], palavra2[TAMANHO];
    int i, iguais = 1; // Supondo que as strings são iguais.

    printf("Digite a primeira palavra: ");
    fgets(palavra1, 50, stdin);
    printf("Digite a segunda palavra: ");
    fgets(palavra2, 50, stdin);

    for(i = 0; palavra1[i] != '\0' || palavra2[i] != '\0'; i++)
    {
        if(palavra1[i] != palavra2[i])
        {
            iguais = 0;
            break;
        }
    }

    if(iguais == 1) printf("As palavras sao iguais!\n");
    else printf("As palavras sao diferentes!\n");

    return 0;
}