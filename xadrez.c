#include <stdio.h>

// Definição de constantes para os movimentos
#define BISPO_DIAGONAL_SUPERIOR_DIREITA 5
#define TORRE_DIREITA 5
#define RAINHA_ESQUERDA 8

int main() {
    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < BISPO_DIAGONAL_SUPERIOR_DIREITA; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // Movimentação da Torre
    printf("Movimentação da Torre:\n");
    for (int i = 0; i < TORRE_DIREITA; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimentação da Rainha
    printf("Movimentação da Rainha:\n");
    for (int i = 0; i < RAINHA_ESQUERDA; i++) {
        printf("Esquerda\n");
    }
    printf("\n");

    return 0;
}
