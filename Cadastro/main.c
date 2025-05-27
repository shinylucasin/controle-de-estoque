#include <stdio.h>
#include <locale.h>
#include <string.h>

#define prodmaximo 2

// Estrutura do produto
struct Produto {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
};

// Protótipos
void cadastrarProduto(struct Produto estoque[], int* total);
void listarProdutos(struct Produto estoque[], int total);
void mostrarValorTotal(struct Produto estoque[], int total);

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct Produto estoque[prodmaximo];
    int total = 0;
    int opcao;

    do {
        printf("\n=== Menu ===\n");
        printf("1. Cadastrar produto\n");
        printf("2. Listar produtos\n");
        printf("3. Mostrar valor total do estoque\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                cadastrarProduto(estoque, &total);
                break;
            case 2:
                listarProdutos(estoque, total);
                break;
            case 3:
                mostrarValorTotal(estoque, total);
                break;
            case 4:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while(opcao != 4);

    return 0;
}

void cadastrarProduto(struct Produto estoque[], int* total) {
    if (*total >= prodmaximo) {
        printf("Estoque cheio!\n");
        return;
    }

    printf("\nInforme o código do produto: ");
    scanf("%d", &estoque[*total].codigo);

    printf("Informe o nome do produto: ");
    scanf(" %[^\n]", estoque[*total].nome);

    printf("Informe a quantidade do produto: ");
    scanf("%d", &estoque[*total].quantidade);

    printf("Informe o preço do produto: ");
    scanf("%f", &estoque[*total].preco);

    (*total)++;
    printf("Produto cadastrado com sucesso!\n");
}

void listarProdutos(struct Produto estoque[], int total) {
    if (total == 0) {
        printf("Estoque vazio!\n");
        return;
    }

    printf("\n--- Lista de Produtos ---\n");
    for (int i = 0; i < total; i++) {
        printf("Código: %d\n", estoque[i].codigo);
        printf("Nome: %s\n", estoque[i].nome);
        printf("Quantidade: %d\n", estoque[i].quantidade);
        printf("Preço: R$ %.2f\n", estoque[i].preco);
        printf("Valor total: R$ %.2f\n", estoque[i].quantidade * estoque[i].preco);
        printf("----------------------------\n");
    }
}

void mostrarValorTotal(struct Produto estoque[], int total) {
    if (total == 0) {
        printf("Estoque vazio!\n");
        return;
    }

    float soma = 0;
    for (int i = 0; i < total; i++) {
        soma += estoque[i].quantidade * estoque[i].preco;
    }
    printf("\nValor total do estoque: R$ %.2f\n", soma);
}
