/* Endereços de memória
Escreva um programa que:
- Declare uma variável inteira.
- Declare um ponteiro para inteiro.
- Atribua o endereço da variável ao ponteiro.
- Imprima:
  - O valor da variável
  - O endereço da variável
  - O valor do ponteiro (endereço armazenado)
  - O conteúdo apontado pelo ponteiro */
#include <stdio.h>

int main() {
  int x, *ptr;
  x = 54;
  ptr = &x;
  printf("Valor da variavel: %d \n", x);
  printf("Endereco da variavel %p \n", &x);
  printf("valor do ponteiro: %p \n", ptr);
  printf("Conteudo apontado pelo ponteiro: %d \n", *ptr);

return 0;
}


