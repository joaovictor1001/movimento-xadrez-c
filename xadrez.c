#include <stdio.h>

int main() {

    // =========================
    // TORRE - usando FOR
    // =========================
    
    int casasTorre = 5;
    
    printf("Movimento da Torre:\n");
    
    for(int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // =========================
    // BISPO - usando WHILE
    // =========================
    
    int casasBispo = 5;
    int contadorBispo = 0;

    printf("Movimento do Bispo:\n");

    while(contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    // =========================
    // RAINHA - usando DO-WHILE
    // =========================
    
    int casasRainha = 8;
    int contadorRainha = 0;

    printf("Movimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while(contadorRainha < casasRainha);

    return 0;
}

// =============================
// Movimento do Cavalo
// =============================

// O cavalo se move 2 casas para baixo e 1 para a esquerda (formato em L)

int casasBaixo = 2;
int casasEsquerda = 1;

printf("\n"); // Linha em branco para separar das outras peças

// Loop FOR para mover duas casas para baixo
// Usamos FOR porque sabemos exatamente quantas casas serão percorridas
for(int i = 0; i < casasBaixo; i++) {
    printf("Baixo\n");

    // Loop WHILE aninhado
    // Quando terminar de descer as duas casas,
    // executa o movimento para a esquerda
    if(i == casasBaixo - 1) {

        int contador = 0;

        while(contador < casasEsquerda) {
            printf("Esquerda\n");
            contador++;
        }

    }
}
