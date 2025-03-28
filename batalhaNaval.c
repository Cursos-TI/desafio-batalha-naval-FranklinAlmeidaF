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

    // Posiciona um navio horizontalmente na linha 2, coluna 3
    for (int i = 0; i < 3; i++) {
        tabuleiro[2][3 + i] = 3;
    }

    // Posiciona um navio verticalmente na linha 5, coluna 7
    for (int i = 0; i < 3; i++) {
        tabuleiro[5 + i][7] = 3;
    }

    printf("Nível Novato - Tabuleiro com Navios Posicionados:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}
