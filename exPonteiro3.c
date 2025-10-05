/*Incremento via ponteiro
Crie uma variável inteira e um ponteiro que aponte para ela. Use o ponteiro para incrementar o valor da variável.*/
#include <stdio.h>

int main() {
    int num = 9;
    int *ptr;

    ptr = &num;

    printf("Valor da variavel: %d \n", num);
    printf("Valor apontado pelo ponteiro: %d \n", *ptr);

    (*ptr)++;

    printf("Valor da variavel apos incremento: %d \n", num);
    printf("Valor apontado pelo ponteiro apos incremento: %d \n", *ptr);

return 0;
}