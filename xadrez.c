#include <stdio.h>

    int main() {

        int option;

        // Desafio para Novato 
        // Menu de comando das Peças
        printf("### MateCheck ###\n\n");
        printf("Escolha a peça a ser movida: \n");
        printf("1. Bispo\n");
        printf("2. Torre\n");
        printf("3. Rainha\n");
        scanf("%d", &option);

        // Código para identificar apenas as opções 1, 2 e 3

        if (option < 1 || option > 3) {
            printf("Opção Inválida\n");
            return 0;
        }

        // Código para a movimentação das peças 
    
        switch (option)
        {
        case 1: // Bispo
            printf("\nMovimentando Bispo\n");

            for (int i = 0; i < 5; i++) 
        {    
                printf("Diagonal\n", i);
            }
            break;

        case 2: // Torre
            printf("\nMovimentando Torre\n");

            for (int i = 0; i < 5; i++) 
            {
                printf("\nDireita", i);
            }
            break;
        case 3: // Rainha
    
            for (int i = 0; i < 8; i++) 
            {
                printf("\nEsquerda", i);
            }
            break;
        default:
            break;
        }

         return 0;
    }
