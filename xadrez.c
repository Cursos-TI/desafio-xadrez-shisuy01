#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

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

    return 0;
}
