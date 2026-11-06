#include <stdio.h>

int main()
{
    int A, B;

    printf("Digite o primeiro numero (A): ");
    scanf("%d", &A);
    printf("Digite o segundo numero (B): ");
    scanf("%d", &B);

    printf("A e' maior que B?: %d\n" , A > B);
    printf("A e' menor que B?: %d\n" , A < B);
    printf("A e' igual a B?: %d\n" , A == B);
    printf("A e' diferente de B?: %d\n" , A != B);
    printf("A e' maior ou igual a B?: %d\n" , A >= B);
    printf("A e' menor ou igual a B?: %d\n" , A <= B);


    return 0;
}