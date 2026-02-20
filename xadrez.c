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
