#include <stdio.h>

// =====================================================
// FUNÇÕES RECURSIVAS
// =====================================================

// -------------------------
// TORRE (Recursiva)
// -------------------------
void moverTorre(int casas) {
    if (casas <= 0) {
        return; // Caso base: para a recursão
    }

    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// -------------------------
// RAINHA (Recursiva)
// -------------------------
void moverRainha(int casas) {
    if (casas <= 0) {
        return;
    }

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// -------------------------
// BISPO (Recursivo + loops aninhados)
// -------------------------
void moverBispo(int casas) {
    if (casas <= 0) {
        return;
    }

    // Loop externo: movimento vertical
    for (int i = 0; i < 1; i++) {

        // Loop interno: movimento horizontal
        for (int j = 0; j < 1; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}

// =====================================================
// MAIN
// =====================================================

int main() {

    // =========================
    // TORRE - Recursiva
    // =========================
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\n");

    // =========================
    // BISPO - Recursivo + loops
    // =========================
    printf("Movimento do Bispo:\n");
    moverBispo(5);

    printf("\n");

    // =========================
    // RAINHA - Recursiva
    // =========================
    printf("Movimento da Rainha:\n");
    moverRainha(8);

    printf("\n");

    // =========================
    // CAVALO - Loops Complexos
    // =========================
    printf("Movimento do Cavalo:\n");

    int movimentoVertical = 2;
    int movimentoHorizontal = 1;

    // Loop externo controla direção vertical
    for (int i = 0; i < movimentoVertical + movimentoHorizontal; i++) {

        if (i < movimentoVertical) {
            printf("Cima\n");
            continue; // Continua até completar 2 movimentos para cima
        }

        // Quando terminar os movimentos verticais
        for (int j = 0; j < movimentoHorizontal; j++) {
            printf("Direita\n");
        }

        break; // Finaliza após completar o "L"
    }

    return 0;
}
