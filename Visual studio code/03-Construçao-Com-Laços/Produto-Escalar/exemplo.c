#include <stdio.h>
#define TAMANHO 3

int main(){
    int vetor1 [TAMANHO] = {1, 2, 3};
    int vetor2 [TAMANHO] = {4, 5, 6};
    int resultado = 0;

    // Calculando o produto escalar
    for (int i = 0; i < TAMANHO; i++){
        resultado += vetor1[i] * vetor2[i]
    }

    // Imprimindo o resultado do produto escalar
    printf("O produto escalar eh: %d\n", resultado);
    return 0;
}