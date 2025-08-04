#include <stdio.h>

/*
 * Simulação dos movimentos das peças de xadrez: Torre, Bispo, Rainha e Cavalo.
 * Torre, Bispo e Rainha utilizam funções recursivas para simular seus movimentos.
 * O Bispo utiliza recursividade combinada com loops aninhados.
 * O Cavalo utiliza loops aninhados complexos e controle de fluxo (continue/break).
 * Cada função imprime a direção do movimento a cada casa percorrida.
 * As saídas são separadas entre as peças com linhas em branco para melhor visualização.
 */

// Função recursiva para o movimento da Torre (exemplo: 3 casas para cima)
void moverTorreCima(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Cima\n");
    moverTorreCima(casasRestantes - 1);
}

// Função recursiva para o movimento da Torre (exemplo: 2 casas para a direita)
void moverTorreDireita(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Direita\n");
    moverTorreDireita(casasRestantes - 1);
}

// Função recursiva para o movimento da Rainha (exemplo: 2 casas para baixo, 2 casas para esquerda)
void moverRainhaBaixo(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Baixo\n");
    moverRainhaBaixo(casasRestantes - 1);
}

void moverRainhaEsquerda(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Esquerda\n");
    moverRainhaEsquerda(casasRestantes - 1);
}

/*
 * Movimento do Bispo: recursivo e loops aninhados.
 * O Bispo anda sempre em diagonal. Por exemplo: 3 casas para a diagonal superior direita,
 * isto é, 3 passos simultâneos "Cima" e "Direita".
 * O loop externo simula o movimento vertical (Cima), o interno simula o movimento horizontal (Direita).
 * A chamada recursiva ocorre para cada diagonal.
 */
void moverBispoDiagonal(int casasRestantes) {
    if (casasRestantes <= 0) return;
    // Movimento vertical (Cima)
    printf("Cima\n");
    // Movimento horizontal (Direita) - loop interno aninhado
    for (int j = 0; j < 1; j++) { // sempre 1 passo na diagonal
        printf("Direita\n");
    }
    moverBispoDiagonal(casasRestantes - 1);
}

/*
 * Movimento complexo do Cavalo: loops aninhados, múltiplas variáveis e controle de fluxo.
 * Exemplo: Duas casas para cima e uma casa para a direita ("L").
 * Usa break e continue para demonstrar controle do fluxo.
 */
void moverCavalo() {
    int casasCima = 2;
    int casasDireita = 1;

    int i, j;
    for (i = 1; i <= casasCima; i++) {
        if (i == 2) {
            // Apenas para demonstrar o uso do 'continue'
            // (poderia ser retirado, serve para mostrar controle de fluxo)
            // Aqui, não pula a iteração, mas exemplifica o uso
            continue;
        }
        printf("Cima\n");
    }

    // O loop externo já foi até casasCima, agora o interno faz a direita
    for (j = 1; j <= casasDireita; j++) {
        if (j > 1) {
            // Exemplo de uso de 'break' (não vai ocorrer aqui porque casasDireita=1)
            break;
        }
        printf("Direita\n");
    }
}

int main() {
    // Parâmetros dos movimentos
    int casasTorreCima = 3;
    int casasTorreDireita = 2;
    int casasRainhaBaixo = 2;
    int casasRainhaEsquerda = 2;
    int casasBispoDiagonal = 3;

    // Movimentação da Torre
    printf("Movimento da Torre:\n");
    moverTorreCima(casasTorreCima);
    moverTorreDireita(casasTorreDireita);

    printf("\n");

    // Movimentação da Rainha
    printf("Movimento da Rainha:\n");
    moverRainhaBaixo(casasRainhaBaixo);
    moverRainhaEsquerda(casasRainhaEsquerda);

    printf("\n");

    // Movimentação do Bispo
    printf("Movimento do Bispo:\n");
    // Loop externo para vertical, interno para horizontal
    for (int i = 0; i < casasBispoDiagonal; i++) {
        // Movimento vertical (Cima)
        printf("Cima\n");
        // Movimento horizontal (Direita)
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }
    // E também usando a função recursiva para demonstrar recursão
    // (opcional, pode comentar se quiser apenas a versão de loops)
    // moverBispoDiagonal(casasBispoDiagonal);

    printf("\n");

    // Movimentação do Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo();

    return 0;
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
