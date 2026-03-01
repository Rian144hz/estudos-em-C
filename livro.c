#include <stdio.h>
#include <string.h>

#define TAM 10

struct Livro {
    char titulo[100];
    char autor[100];
    int ano;
    int paginas;
};

int somaPaginas(struct Livro v[], int n) {
    if (n == 0) {
        return 0;
    }
    return v[n].paginas + somaPaginas(v, n-1);  
}

int contaAutor(struct Livro v[], int n, char autor[]) {
    if (n == 0) {
        return 0;
    }

    if (strcmp(v[n-1].autor, autor) == 0) {
        return 1 + contaAutor(v, n-1, autor);
    }

    return contaAutor(v, n-1, autor);
}

int livroMaisAntigo(struct Livro v[], int n) {
    if (n == 1) {
        return 0;
    }

    int indice = livroMaisAntigo(v, n-1);

    if (v[n-1].ano <= v[indice].ano) {
        return n-1;
    }

    return indice;
}

int main() {

    struct Livro acervo[TAM];
    int qtd = 0;
    int opcao;

    do {
        printf("\n1 - Cadastrar Livro");
        printf("\n2 - Total de paginas");
        printf("\n3 - Quantidade por autor");
        printf("\n4 - Livro mais antigo");
        printf("\n5 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {

            if (qtd <= TAM) {

                getchar();

                printf("Titulo: ");
                fgets(acervo[qtd].titulo, 100, stdin);

                printf("Autor: ");
                fgets(acervo[qtd].autor, 100, stdin);

                printf("Ano: ");
                scanf("%d", &acervo[qtd].ano);

                printf("Paginas: ");
                scanf("%d", &acervo[qtd].paginas);

                qtd++;
            } else {
                printf("Limite atingido\n");
            }

        } else if (opcao == 2) {

            int total = somaPaginas(acervo, qtd);
            printf("Total de paginas: %d\n", total);

        } else if (opcao == 3) {

            char nomeAutor[100];
            getchar();
            printf("Digite o autor: ");
            fgets(nomeAutor, 100, stdin);

            int total = contaAutor(acervo, qtd, nomeAutor);
            printf("Quantidade: %d\n", total);

        } else if (opcao == 4) {

            int indice = livroMaisAntigo(acervo, qtd);
            printf("Livro mais antigo: %s", acervo[indice].titulo);

        }

    } while (opcao != 5);

    return 0;
}