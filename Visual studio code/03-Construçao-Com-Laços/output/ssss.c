#include <stdio.h>
int main()
{

int i; 
float nota, soma = 0, media;

for (i = 1; i <= 3; i++)
{
    nota = i * 2;
    soma += nota;
}

media = soma / 3;
printf("%.1f", media);

    return 0;
}