#include <stdio.h>

/*Troca de valores com ponteiros
Implemente a troca de valores entre duas variáveis usando ponteiros diretamente na main.
- Teste com dois números quaisquer.*/

int main() {
    int x = 34;
    int y = 235;
    int *ptr1 = &x;
    int *ptr2 = &y;

    printf("Valores originais ptr1 = %d e ptr2 = %d \n",*ptr1, *ptr2);
    
    int temp_valor;

    temp_valor = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp_valor;

    printf("Valores trocados: x = %d e y = %d \n", x, y);
    printf("Valores apontados: *ptr1 = %d e *ptr2 = %d \n", *ptr1, *ptr2);
    
return 0;
}

