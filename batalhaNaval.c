#include <stdio.h>


// Desafio Mestre - Batalha Naval

int main() {
    // Declaração e atribuição para a Matriz das Letras
    char letras[11] = {'*', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    // Declaração da Matriz do Tabuleiro
    int tab[10][10];
    
    // Início da vizualização dos tabuleiros

    printf("\t----- Tabuleiro - Batalha Naval -----\n\n");

    printf("Menu: Tabuleiro\n");
    printf("(0): Água\n");
    printf("(3): Navio\n");
    printf("(5): Área Afetada Pela Habilidade\n");
    printf("\n");
    printf("Menu: Áreas Afetadas\n");
    printf("Cone:\n");
    printf("  /5\\ \n");
    printf(" /555\\ \n");
    printf("/55555\\ \n");
    printf("⎺⎺⎺⎺⎺⎺⎺\n");

    printf("Cruz:\n");
    printf("__|5|__\n");
    printf(" 55555\n");
    printf("⎺⎺|5|⎺⎺\n\n");

    printf("Octaedro:\n");
    printf(" /5\\ \n");
    printf("<555>\n");
    printf(" \\5/\n");

    printf("\n\n");

    // Início da Visualização do Tabuleiro e as Partes Especiais no Mar

    printf("Áreas Afetadas Pelas Habilidades no Tabuleiro:\n");

    printf("---------------------------------------------\n");
    // Vizualização das Letras do Tabuleiro
    for (int i = 0; i <= 10; i++) {
        printf(" %c |", letras[i]);
    }

    printf("\n");

    // Visualização dos Números na lateral Esquerda
    for (int i = 0; i < 10; i++) {
        printf("---------------------------------------------\n");
        printf(" %d |", i);
        // Vizualização do Mar
        for (int j = 0; j < 10; j++) {
            // Condicional para Direcionar os Navios
            if ((i == 0 && j == 2) || (i == 1 && j == 1) || (i == 1 && j == 2) || (i == 1 && j == 3) || (i == 2 && j == 0) || (i == 2 && j == 1) || (i == 2 && j == 2) || (i == 2 && j == 3) || (i == 2 && j == 4)) {
                tab[i][j] = 5;
                printf(" %d |", tab[i][j]);

            } else if ((i == 0 && j == 7) || (i == 1 && j == 7) || (i == 2 && j == 7) || (i == 1 && j == 6) || (i == 1 && j == 8)) {
                tab[i][j] = 5;
                printf(" %d |", tab[i][j]);

            } else if ((i == 5 && j == 4) || (i == 6 && j == 4) || (i == 7 && j == 4) || (i == 6 && j == 2) || (i == 6 && j == 3) || (i == 6 && j == 5) || (i == 6 && j == 6)) {
                tab[i][j] = 5;
                printf(" %d |", tab[i][j]);
        
            } else {
                tab[i][j] = 0;
                printf(" %d |", tab[i][j]);
            }
        }
        printf("\n");
    }
    printf("---------------------------------------------\n");
    // Fim da Visualização do Tabuleiro e as Partes Especiais no Mar

    printf("   Fim das Áreas Afetadas Pelas Habilidades\n\n");

    printf("-=--=--=--=--=--=--=--=--=--=--=--=--=--=--=-\n\n");


    printf("Tabuleiro Com os Navios:\n");

    // Início da Visualização do Tabuleiro e os Navios nas suas Respectivas Posições
    printf("---------------------------------------------\n");
    // Vizualização das Letras do Tabuleiro
    for (int i = 0; i <= 10; i++) {
        printf(" %c |", letras[i]);
    }

    printf("\n");

    // Visualização dos Números na lateral Esquerda
    for (int i = 0; i < 10; i++) {
        printf("---------------------------------------------\n");
        printf(" %d |", i);
        // Vizualização do Mar
        for (int j = 0; j < 10; j++) {
            // Condicional para Direcionar os Navios
            if ((i == 2 && j == 3) || (i == 2 && j == 4) || (i == 2 && j == 5)) {
                tab[i][j] = 3;
                printf(" %d |", tab[i][j]);

            } else if ((i == 5 && j == 7) || (i == 6 && j == 7) || (i == 7 && j == 7)) {
                tab[i][j] = 3;
                printf(" %d |", tab[i][j]);

            } else if ((i == 1 && j == 7) || (i == 2 && j == 8) || (i == 3 && j == 9)) {
                tab[i][j] = 3;
                printf(" %d |", tab[i][j]);
        
            } else if ((i == 6 && j == 2) || (i == 5 && j == 3) || (i == 4 && j == 4)) {
                tab[i][j] = 3;
                printf(" %d |", tab[i][j]);
                
            } else {
                tab[i][j] = 0;
                printf(" %d |", tab[i][j]);
            }
        }
        printf("\n");
    }
    printf("---------------------------------------------\n");
    // Fim da Visualização do Tabuleiro e os Navios nas suas Respectivas Posições

    printf("\t Fim do Tabuleiro Com os Navios \n\n");

    printf("-=--=--=--=--=--=--=--=--=--=--=--=--=--=--=-\n\n");

    printf("\t----- Tabuleiro Completo -----\n\n");

    // Início da Visualização do Tabuleiro Completo
    printf("---------------------------------------------\n");
    // Vizualização das Letras do Tabuleiro
    for (int i = 0; i <= 10; i++) {
        printf(" %c |", letras[i]);
    }

    printf("\n");

    // Visualização dos Números na lateral Esquerda
    for (int i = 0; i < 10; i++) {
        printf("---------------------------------------------\n");
        printf(" %d |", i);
        // Vizualização do Mar
        for (int j = 0; j < 10; j++) {
            // Condicional para Direcionar os Navios
            if ((i == 2 && j == 3) || (i == 2 && j == 4) || (i == 2 && j == 5)) {
                if ((i == 2 && j == 3) || (i == 2 && j == 4)) {
                    tab[i][j] = 5;
                    printf(" %d |", tab[i][j]);
                } else {
                    tab[i][j] = 3;
                    printf(" %d |", tab[i][j]);
                }

            } else if ((i == 5 && j == 7) || (i == 6 && j == 7) || (i == 7 && j == 7)) {
                tab[i][j] = 3;
                printf(" %d |", tab[i][j]);

            } else if ((i == 1 && j == 7) || (i == 2 && j == 8) || (i == 3 && j == 9)) {
                if (i == 1 && j == 7) {
                    tab[i][j] = 5;
                    printf(" %d |", tab[i][j]);
                } else {
                    tab[i][j] = 3;
                    printf(" %d |", tab[i][j]);
                }
        
            } else if ((i == 6 && j == 2) || (i == 5 && j == 3) || (i == 4 && j == 4)) {
                if ((i == 6 && j == 2)) {
                    tab[i][j] = 5;
                    printf(" %d |", tab[i][j]);
                } else {
                    tab[i][j] = 3;
                    printf(" %d |", tab[i][j]);
                }
                
            } else {
                tab[i][j] = 0;
                printf(" %d |", tab[i][j]);
            }
        }
        printf("\n");
    }
    printf("---------------------------------------------\n");
    // Fim da Visualização do Tabuleiro Completo

    printf("\n\t--- Fim Tabuleiro Completo ---\n\n");

    printf("\nFim do Jogo. Obrigado por Jogar.\n");

    // Fim do Jogo

    return 0;
}