#include <stdio.h>
int main()
{
int opcao;

do
{
    printf("1 - continuar\n");
    printf("0 sair\n");
    printf("escolha: \n");
    scanf("%d", &opcao);


} while (opcao != 0);

printf("programa encerrado");


    return 0;
}