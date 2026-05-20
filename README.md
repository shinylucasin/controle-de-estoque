### Funções Implementadas

O programa utiliza três funções principais para a gestão do estoque:

* **`cadastrarProduto`**: Gerencia a entrada de dados do usuário e adiciona o produto ao array.
* **`listarProdutos`**: Itera sobre o array de produtos e imprime os detalhes de cada item.
* **`mostrarValorTotal`**: Realiza o cálculo da somatória do valor total do inventário.

---

## ▶️ Como Compilar e Rodar

Para executar este projeto, você precisará de um compilador C (como o GCC) instalado:

1.  **Salve o Código:** Salve o código-fonte em um arquivo chamado, por exemplo, `estoque.c`.

2.  **Compile:** Abra o terminal e use o comando de compilação:

    ```bash
    gcc estoque.c -o estoque
    ```

3.  **Execute:** Rode o programa compilado:

    ```bash
    ./estoque
    ```

---

## ⚠️ Limitações do Projeto

Este é um projeto básico e possui as seguintes limitações, que são ótimos pontos para melhorias futuras:

* O estoque tem um **tamanho fixo** de apenas 5 produtos (`#define prodmaximo 5`).
* Os dados são **voláteis** (são perdidos ao fechar o programa).
* Não há funções para **editar** ou **excluir** produtos.

---

## 💻 Desenvolvimento

Este projeto foi desenvolvido por:

* **shinylucasin** (com ajuda de terceiros)
* Contribuinte: **[samillyv](https://github.com/samillyv)**