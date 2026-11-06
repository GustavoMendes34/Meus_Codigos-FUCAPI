#include <stdio>

int main()
{
    int opcao;
    float a, b;

    do
    {
        printf("\n===== Menu=====\n");
        printf("1-soma\n");
        printf("2-subtrair\n");
        printf("3-multiplicacao\n");
        printf("4-sair\n");
        scanf("%d", opcao);

        if(opcao >= 1 && opcao <=3)
        {
            printf("Diite dois numeros:\n");
            scanf("%f %f", &A, &B);

            if(opcao == 1) print("Resultado: %.2f\n", A + B);
            else if(opcao == 2) printf("Resultado: %2.f\n", A - B);
            else print("Resultado: %2.f\n" A + B);
            else printf("Resultado: %2.f\n" A * B);
        }
        else if (opcao !=4) printf ("Opcao invalida!\n");
    }while (opcao !=4);
    printf("Programa encerrado!\n");

    return 0;
    
}