#include <stdio.h>

//Desafio Movimentação das Peças de Xadrez
// Nível Novato
// Aluno Deork Daniel

int main () {
    // Movimento da Torre
    for(int i = 0; i < 5; i++) 
    {
        printf("Direita \n");  
    }

    //Movimento do Bispo
    int bispo = 0;

    while(bispo < 5) 
    {
          printf("Acima \n");
          printf("À direita \n");
          bispo++;
    }

    // Movimento da rainha
    int rainha = 0;

    do {
          printf("Esquerda \n");
          rainha++;
    } while (rainha < 8);

    return 0;

    
}