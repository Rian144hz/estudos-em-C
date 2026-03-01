#include <stdio.h>
#include <string.h>

#define TAM 100

struct Musica {
    char titulo[60];
    char artista[60];
    int duracao;
    int nota;
};

int somaDuracoes(struct Musica v[], int n) {
    if (n == 0) {
        return 0;
    }
    return v[n-1].duracao + somaDuracoes(v, n-1);
}

int maiorNota(struct Musica v[], int n) {
    if (n == 1) {
        return 0;
    }

    int indiceMaiorAnterior = maiorNota(v, n-1);

    if (v[n-1].nota > v[indiceMaiorAnterior].nota) {
        return n-1;
    } else {
        return indiceMaiorAnterior;
    }
}

int main() {

    struct Musica playlist[TAM];
    int qtd = 0;
    int opcao = 0;

    do {
        printf("\n1 - Cadastrar Musica");
        printf("\n2 - Exibir tempo total");
        printf("\n3 - Exibir musica de maior nota");
        printf("\n4 - Exibir media das notas");
        printf("\n5 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &opcao);
        getchar();

        if (opcao == 1) {

            if (qtd < TAM) {

                printf("Titulo: ");
                fgets(playlist[qtd].titulo, 60, stdin);
                playlist[qtd].titulo[strcspn(playlist[qtd].titulo, "\n")] = 0;

                printf("Artista: ");
                fgets(playlist[qtd].artista, 60, stdin);
                playlist[qtd].artista[strcspn(playlist[qtd].artista, "\n")] = 0;

                printf("Duracao em segundos: ");
                scanf("%d", &playlist[qtd].duracao);

                do {
                    printf("Nota (0 a 10): ");
                    scanf("%d", &playlist[qtd].nota);
                } while (playlist[qtd].nota < 0 || playlist[qtd].nota > 10);

                qtd++;
            } else {
                printf("Limite atingido\n");
            }

        } else if (opcao == 2) {

            if (qtd > 0) {
                int total = somaDuracoes(playlist, qtd);
                printf("Tempo total: %d segundos\n", total);
            } else {
                printf("Nenhuma musica cadastrada\n");
            }

        } else if (opcao == 3) {

            if (qtd > 0) {
                int indice = maiorNota(playlist, qtd);
                printf("Musica com maior nota:\n");
                printf("Titulo: %s\n", playlist[indice].titulo);
                printf("Artista: %s\n", playlist[indice].artista);
                printf("Nota: %d\n", playlist[indice].nota);
            } else {
                printf("Nenhuma musica cadastrada\n");
            }

        } else if (opcao == 4) {

            if (qtd > 0) {
                int soma = 0;
                for (int i = 0; i < qtd; i++) {
                    soma += playlist[i].nota;
                }
                float media = (float)soma / qtd;
                printf("Media das notas: %.2f\n", media);
            } else {
                printf("Nenhuma musica cadastrada\n");
            }

        }

    } while (opcao != 5);

    return 0;
}