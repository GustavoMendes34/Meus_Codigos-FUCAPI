#include <stdio.h>

int main(){
    int nota;
    printf("Digite uma nota de 0 a 10: ");
    scanf("%d", &nota);
    switch (nota) {
        case 10: printf("Conceito: Execelente\n"); break;

        case 9: printf("Conceito: Muito bom\n"); break;
        case 8: printf("Conceito: Muito bom\n"); break;

        case 7: printf("Conceito: Bom\n"); break;
        case 6: printf("Conceito: Bom\n"); break;
 
        case 5: printf("Conceito: Regular\n"); break;

        case 4: printf("Conceito: Insuficiente\n"); break;
        case 3: printf("Conceito: Insuficiente\n"); break;
        case 2: printf("Conceito: Insuficiente\n"); break;
        case 1: printf("Conceito: Insuficiente\n"); break;
        case 0: printf("Conceito: Insuficiente\n"); break;



    }
    return 0;
}