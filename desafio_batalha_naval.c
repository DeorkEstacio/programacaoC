#include <stdio.h>

//Desafio Batalha Naval
// Nível Novato
// Aluno Deork Daniel

int main () {

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Criando o tabuleiro
    printf("TABULEIRO BATALHA NAVAL\n\n");

    int tabuleiro[10][10] = {0}; // Inicializando com zeros

    // Definindo a posição do navio horizontal
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;

    // Definindo a posição do navio vertical
    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;

    // Imprimindo as letras na horizontal
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf("%c  ", linha[j]);
    }
    printf("\n");

    // Imprimindo o tabuleiro com números na vertical
    for (int i = 0; i < 10; i++) {
        printf("%d ", i + 1);  // Imprime os números na vertical
        for (int j = 0; j < 10; j++) {

}