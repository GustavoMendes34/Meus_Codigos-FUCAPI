#include <stdio.h>

int main() 
{
    float nota = 0.0; 

    do 
    {
        printf("Digite uma nota entre 0 e 10: ");
        scanf(" %f", &nota); 

        if (nota < 0 || nota > 10) 
        {
            printf("Valor incorreto! ");
        }

    } while (nota < 0 || nota > 10);

    printf("Nota valida registrada com sucesso: %.2f\n", nota);

    return 0;
}