/*Descrição do Problema
Um teatro quer implementar um sistema de reservas online
onde os assentos podem ser visualizados e selecionados
através de uma matriz 2D. Cada linha representa uma
fileira e cada coluna um assento naquela fileira, onde 0
representa um assento disponível e 1 um assento ocupado.
Objetivo
Desenvolva um programa que inicialize uma matriz para um
teatro com 15 fileiras e 20 assentos por fileira, permita
ao usuário escolher um assento, verifique a
disponibilidade e atualize o status do assento de
disponível para ocupado após a reserva. O programa deve
ser capaz de mostrar a matriz de assentos atualizada após
cada reserva.
*/
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

void imprimirMapa(int matriz[15][20]) {
    printf("\n--- MAPA DO TEATRO (0 = Livre, 1 = Ocupado) ---\n");
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 20; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); // Pula para a próxima fileira no final de cada linha
    }
}

int  main(){
    int fileira, assento;
    int matriz[15][20] = {{0}};
    char saida[5];

    printf("No nosso teatro temos o total de 300 assentos, estao divididos em 20 assentos por fileira, com o total de 15 fileiras. \n");
    imprimirMapa(matriz);
    do
    {
    
    do {
        printf("Escolha uma fileira valida. (0-14) \n");
        scanf("%d", &fileira);
        if (fileira < 0 || fileira > 14)
        {
            printf("Fileira invalida! Digite uma valida: \n");
        }
    } while (fileira < 0 || fileira > 14);

    do {
        printf("Escolha um assento valido. (0-19) \n");
        scanf("%d", &assento);
        if (assento < 0 || assento > 19)
        {
            printf("Assento invalido! Digite um valido: \n");
        }
    } while (assento < 0 || assento > 19);

    printf("Voce escolheu o assento na fileira %d, posicao %d. \n", fileira, assento);

    if (matriz[fileira][assento] == 0)
    {
        printf("Assento desocupado, agora eh seu.\n");
        matriz[fileira][assento] = 1;
        imprimirMapa(matriz);
        
    }else{
        printf("Assento ocupado, escolha um novo assento.\n");
    }
    printf("\nDigite 'sair' para terminar ou qualquer outra tecla para continuar:\n");
    scanf("%s", saida);
    }while (strcmp(saida, "sair") != 0);

return 0;
}