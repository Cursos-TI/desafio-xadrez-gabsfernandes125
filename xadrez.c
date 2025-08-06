#include <stdio.h>

// Número de casas a serem movidas
#define CASAS_TORRE 4
#define CASAS_BISPO 3
#define CASAS_RAINHA 2

// Função recursiva para a Torre (horizontal e vertical)
void moverTorreCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverTorreCima(casas - 1);
}

void moverTorreDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

// Função recursiva para o Bispo (diagonais)
void moverBispoDiagonalDireitaCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispoDiagonalDireitaCima(casas - 1);
}

// Função recursiva para a Rainha (combinação de Torre e Bispo)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverRainha(casas - 1);
}

// Loops aninhados para o Bispo (vertical externo, horizontal interno)
void moverBispoLoopsAninhados(int casas) {
    for (int i = 0; i < casas; i++) {
        printf("Cima\n");
        for (int j = 0; j < 1; j++) { // Apenas uma casa para a direita por nível
            printf("Direita\n");
        }
    }
}

// Movimento do Cavalo (duas casas pra cima e uma pra direita)
void moverCavalo() {
    int movimentos = 3; // número de saltos do cavalo
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 0 || j == 1) {
                printf("Cima\n");
                continue; // vai para o topo do loop interno
            }
            if (j == 2) {
                printf("Direita\n");
                break; // encerra o loop interno
            }
        }
    }
}

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorreCima(CASAS_TORRE);
    moverTorreDireita(CASAS_TORRE);
    printf("\n");

    // Movimento do Bispo com recursão
    printf("Movimento do Bispo (recursivo):\n");
    moverBispoDiagonalDireitaCima(CASAS_BISPO);
    printf("\n");

    // Movimento do Bispo com loops aninhados
    printf("Movimento do Bispo (loops aninhados):\n");
    moverBispoLoopsAninhados(CASAS_BISPO);
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(CASAS_RAINHA);
    printf("\n");

    // Movimento do Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}
