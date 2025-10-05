/*Alocação Dinâmica: Escreva um programa que pergunta ao usuário quantos números ele deseja digitar. Em seguida, aloque dinamicamente um vetor de float com o tamanho informado, 
peça para o usuário digitar os números e, por fim, calcule e imprima a média desses números. Não se esqueça de liberar a memória no final!*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int quantidade_num = 0;
    float *vet;
    float num_somados = 0;
    float num_digitado = 0;

    printf("Digite a quantidade de numeros que deseja digitar: \n");
    scanf("%d", &quantidade_num);
    if (quantidade_num <= 0) {
        printf("Erro: A quantidade de numeros deve ser maior que zero.\n");
        return 1;
    }

    vet =  (float*) malloc(quantidade_num* sizeof(float));

    if (vet == NULL) {
        printf("Erro: Falha ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < quantidade_num; i++)
    {
        printf("Digite um numero: \n");
        scanf("%f", &num_digitado);

        vet[i] = num_digitado;
        num_somados += num_digitado;
    }
    
    float media = (num_somados / quantidade_num);
    printf("Media dos nuumeros digitados: %.2f \n", media);
    
    free(vet);

return 0;
}