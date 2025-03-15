#include <stdio.h>

#define TAMANHO_TABULEIRO 10

// Função para inicializar o tabuleiro com 0s
void inicializarTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    inicializarTabuleiro(tabuleiro);

    // Posiciona navios horizontalmente, verticalmente e diagonalmente
    for (int i = 0; i < 3; i++) {
        tabuleiro[1][1 + i] = 3; // Horizontal
        tabuleiro[3 + i][2] = 3; // Vertical
        tabuleiro[5 + i][5 + i] = 3; // Diagonal
    }

    printf("Nível Aventureiro - Tabuleiro com Navios Posicionados:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}