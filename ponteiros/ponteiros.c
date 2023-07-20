#include <stdio.h>
//Ponteiro guarda o endereço de memoria da variavel
// * antes da variavel = ponteiro
//Exemplo: *address -> declaração da variavel ponteiro


// int main(){
//    int age = 37;
//    printf("%d",&age);//Imprime o valor do endereço da variável -> 0061FF1C
// };


int main() {
   int age;// Declaração da variável age
   int *address = &age;// Declaração do ponteiro address e atribuição do endereço de age a ele

   *address = 37;// Atribuição do valor 37 à variável age indiretamente através do ponteiro

   printf("%u", *address);// Impressão do valor armazenado no endereço apontado por address

   return 0;
}
