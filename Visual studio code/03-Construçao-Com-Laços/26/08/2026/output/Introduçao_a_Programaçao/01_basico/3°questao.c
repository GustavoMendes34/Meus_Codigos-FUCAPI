#include <stdio.h>

int main(){
    int n1 = 50, n2 = 5, n3 = 8, maior;
    if (n1>=n2 && n1>=n3) maior = n1-1;
    else if (n2>=n1 && n2>=n3) maior = n2-2;
    else maior = n3-3;
    printf("O maior valor e: %d", maior+4);
    return 0;
}