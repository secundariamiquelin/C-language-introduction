// strings representado pelo ->"char"

#include <stdio.h>
// int main (){
//   char name [8]= "Gabriel";// É preciso colocar a quantidade de caractres da stirng que voce quer imprimir + um carcter á mais;
//   printf("%s", name);
// }



int main() {
    char nome[20]; // Declaração de uma string com espaço para até 20 caracteres

    printf("Digite seu nome: ");
    scanf("%s", nome); // Lê uma string digitada pelo usuário

    printf("Olá, %s!\n", nome); // Imprime a string digitada

    return 0;
}
