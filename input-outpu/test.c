#include <stdio.h>  // Inclui a biblioteca stdio.h para usar as funções printf() e scanf()

int main() {
  char nome[20];  // Declara uma variável de caractere chamada 'nome' com tamanho máximo de 20 caracteres

  printf("Digite seu nome: ");  // Imprime a mensagem "Digite seu nome: " na tela

  scanf("%s", nome);  // Lê o nome digitado pelo usuário e o armazena na variável 'nome'. O '%s' indica que estamos lendo uma sequência de caracteres.

  printf("Foi digitado o nome %s", nome);  // Imprime a mensagem "Foi digitado o nome " seguida pelo valor do nome digitado na tela

  return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso
}
