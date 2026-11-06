#include <stdio.h>

int main(){
    int cod, qtd;
    float preco;
    printf("1-Cachorro Quente: R$ 4.00\n");
    printf("2- X-Salada: R$4.50\n");
    printf("3- X-Bacon: R$5.00\n");
    printf("4- Torrada: R$2.00\n");
    printf("5- Refrigerante: R$1.50\n");
    scanf("%d", &cod);

    switch(cod){
        case 1: scanf("%d", &qtd);
                preco = qtd * 4.00;
                printf("Preco Total: %f\n", preco);
                break;

    }
  return 0;
  // default: print("Preco Invalido\n"), break; se quiser adicionar uma frase para erro e etc.
}
// if ((A > B) || (A < C))
// ((A == B) && (A < C))
// switch (cod) {
   //case 1
   //case 2

