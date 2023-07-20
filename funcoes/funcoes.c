#include <stdio.h>

//ESTRUTURA BÁSICA
// tipo_de_retorno nome_da_funcao(tipo_argumento1 argumento1, tipo_argumento2 argumento2, ...) {
//     // Corpo da função - onde o código da função é escrito
//     // Pode conter declarações de variáveis, comandos, etc.
    
//     // Retorno opcional
//     return valor_de_retorno;
// }


//FUNÇÂO DE SOMAR 2 NUMEROS
int soma(int a, int b) {
  int resultado = a + b;
  return resultado;
}
int main() {
  int resultado = soma(4, 5);
  printf("O Resultado é: %d\n", resultado);
  return 0;
}


