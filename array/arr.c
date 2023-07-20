//Td valores de array tem que ser do mesmo tipo, ou seja tds int ou double e assim por diante;


// SINTAXE BÁSICA

// tipo nome_do_array[tamanho];
//"tipo" é o tipo de dado dos elementos do array, como int, float, char, etc.
// "nome_do_array" é o nome que você escolhe para o array.
// "tamanho" é o número de elementos que o array pode armazenar.

#include <stdio.h>

// int main (){
//   int numeros[5];

//   numeros[0] = 10;  // atribui o valor 10 ao primeiro 
//   numeros[1] = 20;  
//   numeros[2] = 30;  
//   numeros[3] = 40;  
//   numeros[4] = 50;  

//  for (int i = 0; i < 5; i++) {
//     printf("%d ", numeros[i]);
//   }

// };

// SEGUNDA MANEIRA DE FAZER O EXEMPLO ACIMA
int main (){
  int numeros2[5] = {10, 20, 30, 40, 50};
    numeros2[1] = 15;// altera o valor do segundo elemento para 15

    printf("%d", numeros2[2]);  // imprime o valor do terceiro elemento (30)

}
