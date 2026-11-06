#include <stdio.h>
int main()
{

int numero = 352, digito;

while (numero > 0)
{
    digito = numero % 10;
    printf("%d", digito);
    numero /= 10;
}





    return 0;
}