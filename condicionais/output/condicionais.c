#include <stdio.h>
//Laço FOR
// int main(){
// for (int i = 0; i <= 10; i++) {
//   printf("%u ", i);
//   };
// };

// int main (){
//  int contador;
//  int numero = 1;

//  for  (contador = 1;contador <= 10; contador = contador + 1){
//   printf("teste\n");
//  };

//  return 0;
// };

//WHILE 

int main() {
    int contador = 0;

    while (contador < 5) {
        printf("Contador: %d\n", contador);
        contador++;
    }

    return 0;
}


//DO WHILE

int main() {
    int contador = 0;

    do {
        printf("Contador: %d\n", contador);
        contador++;
    } while (contador < 5);

    return 0;
}


//o while é usado quando você quer que o bloco de código seja repetido apenas se a condição for verdadeira desde o início, enquanto o do while é usado quando você deseja que o bloco de código seja executado pelo menos uma vez, mesmo que a condição seja falsa no início.
