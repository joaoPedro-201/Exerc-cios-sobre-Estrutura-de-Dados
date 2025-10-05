/*Atribuição e manipulação de ponteiros
Crie duas variáveis inteiras com valores diferentes e dois ponteiros. Faça:
- Atribuições cruzadas entre ponteiros.
- Impressão dos valores originais e apontados.
- Reatribua os ponteiros e observe os efeitos.*/
#include <stdio.h>
int main() {
    int x = 232343;
    int y = 654212;
    int *ptr1, *ptr2;

    ptr1 = &x;
    ptr2 = &y;

    printf("--- Estado Inicial ---\n");
    printf("Valores originais: %d e %d \n", x, y);
    printf("Valores apontados: *ptr1 = %d, *ptr2 = %d \n", *ptr1, *ptr2);
    printf("Ponteiros apontam para: ptr1 = %p, ptr2 = %p \n\n", ptr1, ptr2);

    ptr1 = &y;
    ptr2 = &x;

    printf("--- Apos Atribuicao Cruzada ---\n");
    printf("Valores originais inalterados: x = %d, y = %d\n", x, y); 
    printf("Novos valores apontados: *ptr1 = %d, *ptr2 = %d\n", *ptr1, *ptr2);
    printf("Ponteiros agora apontam para: ptr1 = %p, ptr2 = %p\n\n", ptr1, ptr2);

    ptr1 = &x;
    ptr2 = &y;
    
    printf("--- Apos Reatribuicao ---\n");
    printf("Valores das variaveis: x = %d, y = %d\n", x, y);
    printf("Valores apontados: *ptr1 = %d, *ptr2 = %d\n", *ptr1, *ptr2);
    printf("Ponteiros agora apontam para: ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);


return 0;
}
