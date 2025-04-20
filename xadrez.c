#include <stdio.h>

/*
    Desafio: Simular os movimentos de três peças de xadrez (Torre, Bispo e Rainha)
    utilizando diferentes estruturas de repetição (for, while, do-while).
    
    Regras:
    - Torre se move 5 casas para a direita (FOR)
    - Bispo se move 5 casas na diagonal "Cima Direita" (WHILE)
    - Rainha se move 8 casas para a esquerda (DO-WHILE)

    Autoria: [Seu Nome]
*/

int main() {
    // =============================
    // MOVIMENTO DA TORRE COM "FOR"
    // =============================

    // A torre se move em linha reta. Vamos simular 5 movimentos para a direita.
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= 5; i++) {
        // A cada iteração, representamos a torre se movendo uma casa à direita
        printf("Direita\n");
    }

    // =============================
    // MOVIMENTO DO BISPO COM "WHILE"
    // =============================

    // O bispo se move em diagonal. Aqui ele se moverá 5 vezes na diagonal "Cima Direita"
    int contador_bispo = 1;
    printf("\nMovimento do Bispo (5 casas na diagonal Cima Direita):\n");
    while (contador_bispo <= 5) {
        // Movimento combinado: uma casa para cima + uma para a direita
        printf("Cima Direita\n");
        contador_bispo++; // Avança o contador para controlar o loop
    }

    // =============================
    // MOVIMENTO DA RAINHA COM "DO-WHILE"
    // =============================

    // A rainha pode se mover em qualquer direção. Vamos simular 8 movimentos para a esquerda.
    int contador_rainha = 1;
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    do {
        // A cada iteração, simulamos um movimento para a esquerda
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= 8); // Continua até atingir 8 movimentos

    return 0; // Fim do programa
}
