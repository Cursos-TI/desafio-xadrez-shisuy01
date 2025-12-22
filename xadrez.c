#include <stdio.h>

/* ==== NÍVEL MESTRE ==== */

/* Torre - recursiva */
void moverTorreRec(int casas) {
    if (casas == 0) return;

    printf("Direita\n");
    moverTorreRec(casas - 1);
}

/* Rainha - recursiva */
void moverRainhaRec(int casas) {
    if (casas == 0) return;

    printf("Cima\n");
    printf("Direita\n");
    moverRainhaRec(casas - 1);
}

/* Bispo - recursivo + loops aninhados */
void moverBispoRec(int casas) {
    if (casas == 0) return;

    for (int g = 1; g <= 1; g++) {
        printf("Cima\n");

        for (int h = 1; h <= 1; h++) {
            printf("Direita\n");
        }
    }

    moverBispoRec(casas - 1);
}

/* Cavalo - loops complexos */
void moverCavaloMestre() {
    for (int i = 1; i <= 2; i++) {
        printf("Cima\n");
        if (i == 1) continue;
    }

    for (int j = 1; j <= 1; j++) {
        printf("Direita\n");
        break;
    }
}

int main() {

    int option;
    int casas = 3;

    printf("### MateCheck ###\n\n");
    printf("Escolha a peça a ser movida: \n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    scanf("%d", &option);

    if (option < 1 || option > 4) {
        printf("Opção Inválida\n");
        return 0;
    }

    switch (option) {

    case 1: // Bispo
        printf("\nMovimentando Bispo\n\n");
        moverBispoRec(casas);
        break;

    case 2: // Torre
        printf("\nMovimentando Torre\n\n");
        moverTorreRec(casas);
        break;

    case 3: // Rainha
        printf("\nMovimentando Rainha\n\n");
        moverRainhaRec(casas);
        break;

    case 4: // Cavalo
        printf("\nMovimentando Cavalo\n\n");
        moverCavaloMestre();
        break;
    }

    return 0;
}
