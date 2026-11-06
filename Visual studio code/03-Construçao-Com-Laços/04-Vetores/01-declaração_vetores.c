#include <stdio.h>
#define TAMANHO 4

int main()
{
    //int notas[4]; // declaração de vetor
    int notas[TAMANHO]; // = {8, 9, 10, 10}; // inivialização do vetor
    //int notas[] = {8, 9, 10, 10}; // inivialização do vetor

    for(int i = 0; i < TAMANHO; i++)
    {
        printf("Nota [%d]:\n", i, notas[i]);
    }
    //notas[0] = 8;
    //notas[1] = 9;
    //notas[2] = 10;
    //notas[3] = 10;

    //printf("%d\n", notas[0]);
    //printf("%d\n", notas[1]);

    return 0;
}