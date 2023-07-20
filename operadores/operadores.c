// Se acaso o codigo não rodar do jeito que está://Comente o que você não quero rodar

//  a++ incrementa a variável a após seu uso.
#include <stdio.h>
int main (){
  int a = 2;
  int b = a++;//Adcionou mais 1, logo:
  printf("%d", a);//A = 3
};

// ++a incrementa a variável a antes de usá-la.
// #include <stdio.h>
int main() {
  int a = 2;
  int b = ++a; // Incremento em a antes de atribuir a b (a = 3, b = 3)
  b = ++a; // Incremento em a antes de atribuir a b novamente (a = 4, b = 4)
  printf("Resultado: %d", b); // Imprime o valor de b (4)
}

// OPERADOR 'sizeof'
// Usador para saber quantos bytes tenho em um dado ou uma determinada variável
// #include <stdio.h>
int main (){
   float number = 22.21;
   size_t size = sizeof(number);//size_t-> usado para representar tamanhos em bytes. 
   // %zu -> usado para imprimir valores do tipo "size_t"
   printf("Tamanho em bytes: %zu",size);
};
