#include <stdio.h>

int main()
{

    int i = 0; // (interador) - expr_inicial
    // contadoras e acumuladoras

    while(i < 10) // criterio de parada - expr_booleana
    {
       printf("%d ", i);
       i++; //i = i + 1;O professor usa i++ porque é mais fácil mas as duas fazem a mesma coisa;
       //i = i + 2; se fazer assim tambem funciona;
       //i+=2 // a mesma coisa de i = i + 2;
       //i += 2 soma //i = i + 2;
       //i -= 2 subtração  //i = i - 2;
       //i *= 2 mutiplicação  //i = i * 2;
       //i /= 2 divisão  //i = i / 2;
    }
    return 0;

}