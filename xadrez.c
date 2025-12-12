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
        printf("4. Cavalo\n");
        scanf("%d", &option);

        // Código para identificar apenas as opções 1, 2, 3 e 4

        if (option < 1 || option > 4) {
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
        case 4: // Cavalo Nível Aventureiro

            printf("\n### Movimentando Cavalo ###\n");

            printf("Movimento: 2 para Baixo e 1 para Esquerda (L)\n\n");

            // Loop externo: FOR >>> para baixo
           for (int i = 1; i <= 2; i++)
           {
            printf("Baixo", i);

                // Loop interno só roda na última descida 
                if (i == 2) {
                    int j = 1;
                    while (j <= 1) {
                        printf("\nEsquerda\n", j);
                        j++;
                    }
                }

                printf("\n");
           }

           
            break;

        default:
            break;
        }

         return 0;
    }
    

    
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

  

