/*Ponteiros: Crie uma função chamada calcular que recebe dois números inteiros e dois ponteiros. 
A função deve armazenar a soma dos números no primeiro ponteiro e a multiplicação no segundo.*/
#include <stdio.h>

void calcular(int x, int y, int *ptr1, int *ptr2){
    
    *ptr1 = x + y;
    *ptr2 = x * y;

}
