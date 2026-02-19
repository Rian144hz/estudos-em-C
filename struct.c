
#include <stdio.h>

#define TAM 5

struct funcionarios
{
    int matricula;
    char nome[50];
    float salario;
    int anoNascimento;
};

int main(){
    struct funcionarios funcionario[TAM];
    int opcao = 0;

    do{
        printf("\nInforme a opção o que você deseja:\n 1 - Cadastrar funcionario\n 2 - Obter o funcionario com maior salario\n 3 - Listar todos os funcionarios do ano de nascimento igual ao digitado\n 0 - Sair : ");
        if (scanf("%d", &opcao) != 1) break;

        switch (opcao)
        {
            case 0:
                break;

            case 1:
                for (int i = 0; i < TAM; i++){
                    printf("\nCadastre o funcionario %d:\n", i + 1);
                    printf("Matricula: ");
                    scanf("%d", &funcionario[i].matricula);
                    printf("Nome: ");
                    scanf("%s", funcionario[i].nome);
                    printf("Salario: ");
                    scanf("%f", &funcionario[i].salario);
                    printf("Ano nascimento: ");
                    scanf("%d", &funcionario[i].anoNascimento);
                }
                break;

            case 2: {
                int Maior = -1;
                for (int i = 0; i < TAM; i++){
                    if (Maior == 0 || funcionario[i].salario > funcionario[Maior].salario){
                        Maior = i;
                    }
                }
                if (Maior != -1){
                    printf("\n========================================================\n");
                    printf("O maior salario é do funcionario %s, no valor de %.2f\n",
                        funcionario[Maior].nome, funcionario[Maior].salario);
                } else {
                    printf("Nenhum funcionario cadastrado.\n");
                }
                break;
            }

            case 3: {
                int ano;
                printf("Digite o ano de nascimento que deseja: ");
                scanf("%d", &ano);
                printf("\nFuncionarios nascidos em %d:\n", ano);

                for (int i = 0; i < TAM; i++){
                    if (funcionario[i].anoNascimento == ano){
                        printf("Nome: %s\n",
                               funcionario[i].nome);
                               
                        
                    }else{
                        printf("Nenhum funcionario encontrado com esse ano de nascimento.\n");
                        break;
                    }
                }
                
            }

            default:
            return 0;
                printf("Opcao invalida.\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}
