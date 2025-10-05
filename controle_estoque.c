/*Descrição do Problema
Você precisa criar um sistema de controle de estoque para
um supermercado que mantém a contagem de produtos
diferentes em um vetor. Cada índice do vetor representa
um tipo de produto (por exemplo, índice 0 para arroz,
índice 1 para feijão, etc.), e o valor em cada índice
indica a quantidade atual desse produto no estoque.
Objetivo
Escreva um programa que inicialize este vetor com
quantidades aleatórias para 10 produtos diferentes,
permita ao usuário “comprar” produtos (diminuindo a
quantidade do estoque), e adicionar novos produtos ao
estoque. O programa deve imprimir o estado atual do
estoque após cada operação.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAMANHO_ESTOQUE 10

void imprimirEstoque(int estoque[]) {
    printf("\nEstoque atual: ");
    for (int i = 0; i < TAMANHO_ESTOQUE; i++) {
        printf(" %d", estoque[i]);
    }
    printf("\n");
}

int main(){
    int vet[TAMANHO_ESTOQUE];
    int opcao = 0; 
    int indice = 0;

    srand(time(NULL));

    for (int i = 0; i < TAMANHO_ESTOQUE; i++) {
        vet[i] = rand() % 100;
    }

    printf("Como a lista se encontra atualmente: \n");
    for (int i = 0; i < TAMANHO_ESTOQUE; i++)
    {
        printf(" %d", vet[i]);
    }

 
    printf("\n Escolha 1 para fazer uma compra e 2 para adicionar novos produtos ao estoque: ");
    scanf("%d", &opcao);

    printf("Escolha um numero de 0 a 9 que reresenta o indice do produto que deseja acessar: ");
    scanf("%d", &indice);

    if (indice >= 0 && indice < TAMANHO_ESTOQUE) {
        printf(" Quantidade disponivel: %d \n", vet[indice]);
    } else {
        printf("Indice invalido!\n");
        return 0;
    }


    switch (opcao)
    {
    case 1:{
        int quantC;
        printf("Digite a quantidade que deseja comprar: ");
        scanf("%d", &quantC);
        if(quantC > vet[indice]) {
            printf("Quantidade indisponivel.");
            return 1;
        }
        vet[indice] -= quantC;
        printf("Como a lista se encontra atualmente: \n");
        imprimirEstoque(vet);
        break;
        }

    case 2:{
        int quantA;
        printf("Digite a quantidade que deseja adicionar ao estoque: ");
        scanf("%d", &quantA);
        vet[indice] += quantA;
        printf("Como a lista se encontra atualmente: \n");
        imprimirEstoque(vet);
        break;
        }
    default:
        printf("Opcao invalida!");
        break;
    }
    
return 0;
}