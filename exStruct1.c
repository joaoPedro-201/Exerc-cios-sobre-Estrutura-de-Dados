/*Structs e typedef: Defina uma struct chamada Produto com os campos: nome (string), preco (float) e quantidade_estoque (int). 
Crie uma variável do tipo Produto, preencha seus dados e imprima-os na tela.*/
#include <stdio.h>

    typedef struct 
    {
        char nome[20];
        float preco;
        int quantidade_estoque;
    }Produto;

int main() {
    Produto Produto1 = {"velas de ingnicao", 125, 13};

    printf("Nome do produto: %s \n", Produto1.nome);
    printf("Valor do produto: %.2f \n", Produto1.preco);
    printf("Quantidade em estoque %d \n", Produto1.quantidade_estoque);
    
return 0;
}

    
