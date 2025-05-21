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
}