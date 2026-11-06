#include <stdio.h> 

int main() 
{

    int mes;
    printf("Digite um numero de 1 a 12 \n");
    scanf("%d", &mes);
    if(mes == 1) printf("Janeiro\n");
    else if(mes == 2) printf("Fevereiro\n");
    else if(mes == 3) printf("Marco\n");
    else if(mes == 4) printf("Abril\n");

    else printf("mes inexistente\n");

    return 0;
}