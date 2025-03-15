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

// Função para posicionar navios (nível Novato e Aventureiro)
void posicionarNavios(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    // Nível Novato
    for (int i = 0; i < 3; i++) {
        tabuleiro[2][3 + i] = 3; // Navio horizontal
        tabuleiro[5 + i][7] = 3; // Navio vertical
    }

    // Nível Aventureiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[1][1 + i] = 3; // Navio horizontal
        tabuleiro[3 + i][2] = 3; // Navio vertical
        tabuleiro[5 + i][5 + i] = 3; // Navio diagonal
    }
}

// Função para aplicar habilidades especiais (nível Mestre)
void aplicarHabilidades(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    // Habilidade em Cone
    for (int i = 0; i < 3; i++) {
        for (int j = 2 - i; j <= 2 + i; j++) {
            tabuleiro[i][j] = 1;
        }
    }

    // Habilidade em Cruz
    for (int i = 4; i < 7; i++) {
        tabuleiro[i][5] = 1;
        tabuleiro[5][i] = 1;
    }

    // Habilidade em Octaedro
    for (int i = 0; i < 3; i++) {
        for (int j = 2 - i; j <= 2 + i; j++) {
            tabuleiro[7 + i][j] = 1;
        }
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    inicializarTabuleiro(tabuleiro);

    // Posiciona navios (nível Novato e Aventureiro)
    posicionarNavios(tabuleiro);

    // Aplica habilidades especiais (nível Mestre)
    aplicarHabilidades(tabuleiro);

    printf("Nível Mestre - Tabuleiro Completo:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}