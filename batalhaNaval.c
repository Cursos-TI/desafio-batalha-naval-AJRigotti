#include <stdio.h>

int main() {

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int tabuleiro[10][10];

    printf("Bem vindo ao jogo de Batalha Naval!!\n");

    //imprime o cabeçalho
    printf("   ");  //espaco para alinhar as letras com o tabuleiro
    for(int i = 0; i<10 ; i++){
        printf("%c ", linha[i]);   //imprime o cabecalho
        }
        printf("\n");       //pula linha para comecar o tabuleiro
        
    //inicializa o tabuleiro
    for(int i = 0 ; i<10 ; i++){
        for(int j = 0 ; j<10 ; j++){
            tabuleiro[i][j] = 0;        //define o tabuleiro todo para 0, criando um tabuleiro em branco
        }
    }

    //define os navios
     for(int i = 0; i<3 ; i++){
        tabuleiro[3][4 + i] = 3;    //define a posicao do primeiro navio
    }

     for(int j = 0; j<3 ; j++){
        tabuleiro[7 + j][8] = 3;    //define a posicao do segundo navio
    }

    //imprimindo o tabuleiro na tela
    for (int i = 0; i < 10; i++) {

        printf("%2d ", i + 1);       //imprime o numero das linhas

        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);     //imprime o tabuleiro
        }
        printf("\n");
    }

    return 0;
}
