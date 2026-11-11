#include <stdio.h>

int main()
{   
    // Declaração e Inicialização de Strings
    char str1[6] = {'J', 'o', 'a', 'o', '\0'};
    char str2[10] = "Joao";
    char str3[10] = "Teste";
    char str4[10];
    printf("%c\n", str3[0]); // Exibe T
    printf("%s\n", str3);

    str3[0] = 'L';
    printf("%c\n", str3[0]); // Exibe L
    printf("%s\n", str3);

    //str4 = str2; // ERRADO
    //printf("%s\n", str4);
    int i;
    for(i = 0; str2[i] != '\0'; i++)
    {
        str4[i] = str2[i];
    }
    str4[i] = '\0';
    printf("%s\n", str4);
    return 0;
}