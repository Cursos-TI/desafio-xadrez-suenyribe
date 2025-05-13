#include <stdio.h>

    int main() {
        // --------------------------
        // Simulação da movimentação da TORRE (5 casas para a direita)
        // Usando estrutura de repetição: FOR
        // --------------------------
        printf("Movimento da Torre:\n");
        for (int i = 1; i <= 5; i++){ 
            printf("Direita\n");

        }

        printf("\n");

        //-------------------------
        //Simulação da movimentação do BISPO (5 casas na diagonal: cima e direita)
        //Usando estrutura de repetição: WHILE
        //-------------------------
        printf("movimento do Bispo:\n");
        int j = 1;
        while (j <= 5) {
            printf("Cima Direita\n");
            j++;
        }

        printf("\n");

        // --------------------------
        // Simulação da Movimentação da Rainha  (8 casas para a esquerda)
        // Usando estrutura de repetição: DO-WHILE
        // --------------------------
        printf("Movimento da Rainha:\n");
        int k = 1;
        do { 
             printf("Esquerda\n");
             k++;
        } while (k <= 8);

        return 0;

}
