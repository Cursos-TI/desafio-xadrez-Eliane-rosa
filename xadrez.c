#include <stdio.h>

/*
 * Simulação de movimentos de peças de xadrez: Torre, Bispo e Rainha.
 * Cada peça utiliza uma estrutura de repetição diferente.
 * Não há entrada do usuário, valores são definidos por variáveis/constantes.
 */

int main() {
    // Número de casas que cada peça irá se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int i; // Variável para controle dos loops

    // -------------------------------
    // Movimento da Torre (FOR)
    // -------------------------------
    // Torre move-se 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // -------------------------------
    // Movimento do Bispo (WHILE)
    // -------------------------------
    // Bispo move-se 5 casas na diagonal para cima e à direita
    printf("Movimento do Bispo:\n");
    i = 1;
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // -------------------------------
    // Movimento da Rainha (DO-WHILE)
    // -------------------------------
    // Rainha move-se 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    return 0;
}

/*
Saída esperada:

Movimento da Torre:
Direita
Direita
Direita
Direita
Direita

Movimento do Bispo:
Cima Direita
Cima Direita
Cima Direita
Cima Direita
Cima Direita

Movimento da Rainha:
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
*/
