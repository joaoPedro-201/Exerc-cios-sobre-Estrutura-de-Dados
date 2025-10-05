/*Manipulação de Arquivos: Usando a struct Produto do exercício 2, crie um programa que salva os dados de um produto em um arquivo chamado produto.txt.
Cada campo deve ficar em uma linha. Depois, crie outro programa (ou outra função) que lê os dados deste arquivo e os exibe na tela.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char nome[20];
    float preco;
    int quantidade_estoque;
}Produto;

int main() {
    Produto produto1 = {"Honda civic", 43000, 2};
    FILE *fp;

    fp = fopen ("produto.txt", "w");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    fprintf(fp, "%s\n", produto1.nome);
    fprintf(fp, "%f\n", produto1.preco);
    fprintf(fp, "%d\n", produto1.quantidade_estoque);
    fclose(fp);

    fp = fopen ("produto.txt", "r");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    Produto produto_lido;

    fscanf(fp, "%s", produto_lido.nome);
    fscanf(fp, "%f", &produto_lido.preco);
    fscanf(fp, "%d", &produto_lido.quantidade_estoque);

    printf("%s\n", produto_lido.nome);
    printf("R$%.2f\n", produto_lido.preco);
    printf("%d\n", produto_lido.quantidade_estoque);

    fclose(fp);
    
return 0;
}