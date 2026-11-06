#include <stdio.h>

int main() 
{
    int senha, senhaCorreta = 1234;
    
    do
    {
        printf("Digite a senha numerica: ");
        scanf("%d", &senha);

        if(senha != senhaCorreta)
        {
            printf("Senha invalida! Tente novamente.\n ");
        }

    } while (senha != senhaCorreta);
    printf("Acesso Autorizado\n");
    

    return 0;
}