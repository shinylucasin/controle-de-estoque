#include <stdio.h>
#include <locale.h>

#define prodmaximo 100

struct Produto {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
};

void cadastrarProduto(struct Produto estoque [], int* total) {
    if(*total >= prodmaximo){
        printf("Estoque cheio!");
        return;
    }

    printf("Informe o código do produto: ");
    scanf("%d", &estoque[*total].codigo);

    printf("Informe o nome do produto: ");
    scanf(" %[^\n]", estoque[*total].nome);

    printf("Informe a quantidade do produto: ");
    scanf("%d", &estoque[*total].quantidade);

    printf("Informe o preço do produto: ");
    scanf("%f", &estoque[*total].preco);

    (*total)++;
    printf("Produto cadastrado com sucesso.");
}

