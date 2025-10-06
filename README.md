# 📦 Controle de Estoque Simples em C

Este projeto implementa um sistema básico de **Controle de Estoque** em linguagem **C**, utilizando `structs` para definir a estrutura dos produtos. É ideal para demonstrar o uso de estruturas de dados e a manipulação de arrays (vetores) em C.

---

## 🚀 Funcionalidades

O menu do programa oferece as seguintes opções para gerenciar o estoque:

1.  **Cadastrar Produto:** Insere um novo item com código, nome, quantidade e preço.
2.  **Listar Produtos:** Exibe todos os produtos cadastrados, incluindo o valor total individual.
3.  **Mostrar Valor Total do Estoque:** Calcula e exibe a soma total do valor monetário de todos os itens.
4.  **Sair:** Encerra o programa.

---

## 🛠 Tecnologias Utilizadas

O projeto utiliza apenas a linguagem C com suas bibliotecas padrão:

* **Linguagem de Programação:** C
* **Bibliotecas:** `stdio.h` (Entrada/Saída) e `locale.h` (suporte a caracteres em Português).

---

## ⚙️ Estrutura do Código

O código é modularizado em um único arquivo, com uma `struct` para os dados e funções claras para cada operação.

### Estrutura de Dados (`struct Produto`)

O programa define uma estrutura para armazenar as informações de cada produto no estoque:

```c
struct Produto {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
};

```

Funções Implementadas
O programa utiliza três funções principais para a gestão do estoque:

cadastrarProduto: Gerencia a entrada de dados do usuário e adiciona o produto ao array.

listarProdutos: Itera sobre o array de produtos e imprime os detalhes de cada item.

mostrarValorTotal: Realiza o cálculo da somatória do valor total do inventário.

▶️ Como Compilar e Rodar
Para executar este projeto, você precisará de um compilador C (como o GCC) instalado:

Salve o Código: Salve o código-fonte em um arquivo chamado, por exemplo, estoque.c.

Compile: Abra o terminal e use o comando de compilação:

Bash

gcc estoque.c -o estoque
Execute: Rode o programa compilado:

Bash

./estoque
⚠️ Limitações do Projeto
Este é um projeto básico e possui as seguintes limitações, que são ótimos pontos para melhorias futuras:

O estoque tem um tamanho fixo de apenas 5 produtos (#define prodmaximo 5).

Os dados são voláteis (são perdidos ao fechar o programa).

Não há funções para editar ou excluir produtos.
