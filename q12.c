#include <stdio.h>
int main()
{
    // aqui eu inicio todas as variaves que vou usar.
    char jogoDaVelha[3][3];
    char jogador = 'X';
    int linha = 0;
    int coluna = 0;
    int jogadas = 0;
    // aqui eu printo o tabuleiro com '-' só para ele ficar visivel.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            jogoDaVelha[i][j] = '-';
        }
    }
    // aqui é meu while, onde a lógica toda fica.
    while (1)
    {
        // aqui eu peço para o jogador da vez digitar o indice da linha e da coluna.
        printf("Vez do jogador %c: Digite linha e coluna: ", jogador);
        // aqui eu leio  oq jogador da vez digitar.
        scanf("%d %d", &linha, &coluna);
        // aqui eu faço uma condição, pois só existe as posicoes 0,1,2, sendo diferente disso,coordenada invalida.
        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2)
        {
            printf("Coordenada invalida! Tente novamente\n");
            continue;
        }
        // aqui eu faço condição para que os não joguem na mesma posição.
        if (jogoDaVelha[linha][coluna] != '-')
        {
            printf("Lugar ocupado! tente novamente!\n");
            continue;
        }
        // aqui o tabuleiro recebe os indices que o jogador da vez vai digitar.
        jogoDaVelha[linha][coluna] = jogador;

        // aqui eu conto as quantidades de jogadas.
        jogadas++;
        // aqui, a cada jogada eu printo a atualização do tabuleiro.
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%c ", jogoDaVelha[i][j]);
            }
            printf("\n");
        }
        // aqui eu verifico a vitoria do jogador quando preencher a linha toda.
        for (int i = 0; i < 3; i++)
        {
            if (jogoDaVelha[i][0] == jogador && jogoDaVelha[i][1] == jogador && jogoDaVelha[i][2] == jogador)
            {
                printf("Jogador %c venceu!", jogador);
                return 0;
            }
        }
        // aqui eu verifico a vitoria do jogador quando preencher a coluna toda.
        for (int j = 0; j < 3; j++)
        {
            if (jogoDaVelha[0][j] == jogador && jogoDaVelha[1][j] == jogador && jogoDaVelha[2][j] == jogador)
            {
                printf("Jogador %c venceu!", jogador);
                return 0;
            }
        }
        // aqui eu verifico a vitoria do jogador quando preencher a diagonal principal toda.
        if (jogoDaVelha[0][0] == jogador && jogoDaVelha[1][1] == jogador && jogoDaVelha[2][2] == jogador)
        {
            printf("Jogador %c venceu!", jogador);
            return 0;
        }
        // aqui eu verifico a vitoria do jogador quando preencher a diagona secundaria toda.
        if (jogoDaVelha[0][2] == jogador && jogoDaVelha[1][1] == jogador && jogoDaVelha[2][0] == jogador)
        {
            printf("Jogador %c venceu!", jogador);
            return 0;
        }
        // aqui eu troco de vez, se o jogador 'X' já jogou entao é a vez do jogador 'Y'.
        if (jogador == 'X')
        {
            jogador = 'Y';
        }
        // aqui eu troco de vez, se o jogador 'Y' já jogou entao é a vez do jogador 'X'.
        else
        {
            jogador = 'X';
        }
        // aqui se o numero de jogadas for igual a nove, pois o maximo de jogadas é nove,
        if (jogadas == 9)
        {
            printf("Empate!\n");
            break;
        }
    }
    // aqui no final eu printo todo tabuleiro, ja preenchido.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c ", jogoDaVelha[i][j]);
        }
        printf("\n");
    }

    return 0;
}
