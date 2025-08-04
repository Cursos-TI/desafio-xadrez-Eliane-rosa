#include <stdio.h>

/*
 * Programa para demonstrar os movimentos das peças de xadrez, incluindo o Cavalo.
 * O movimento do Cavalo implementado aqui é: duas casas para baixo e uma casa para a esquerda.
 * Os movimentos são impressos um por linha, e o movimento do Cavalo é separado dos demais por uma linha em branco.
 */

int main() {
    // Exemplo de movimento de outras peças (pode ser removido se não quiser)
    printf("Cima\n");
    printf("Direita\n");
    printf("Baixo\n");
    printf("Esquerda\n");

    // Linha em branco para separar o movimento do Cavalo
    printf("\n");

    // Definição das quantidades de casas a mover
    int casas_baixo = 2;
    int casas_esquerda = 1;

    // Movimento do Cavalo: duas casas para baixo
    // Utilizando um loop for para as duas casas para baixo
    for (int i = 0; i < casas_baixo; i++) {
        printf("Baixo\n");
    }

    // Agora, uma casa para a esquerda usando um loop while
    int j = 0;
    while (j < casas_esquerda) {
        printf("Esquerda\n");
        j++;
    }

    // Fim do programa
    return 0;
}
