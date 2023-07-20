//CONSTANTES
//Declarando constantes - usamos como boa prática declarar constantes com letra MAIUSCULA

// int main (){
// //const int AGE = 37;
// #define AGE  53// Outra maneira de definir constantes(obs SEM o sinal de = e sem ponto e vírgula;)
//  printf("%u", AGE);
//  };


//TIPOS DE DADOS 
 
//1-Inteiro (int):
// Um inteiro é usado para armazenar números inteiros sem parte decimal(ou seja sem numeros após a vírgula).Por exemplo:
// #include <stdio.h>
// int main (){
//   int num;
//   num = 10;
// printf("%d", num)
// };



//2 - Ponto flutuante (float):
//Um ponto flutuante é usado para armazenar números com parte decimal. Por exemplo:
// int main (){
// float altura = 1.74;
// printf("%.2f",altura);  //especificador do float = "%f" 
// //O 2 siginifica que quero somente 2 casas decimais após o ponto
// }



//3 - char 
//Armazena dados do tipo TEXTO(uma variável do tipo char, armazena uma unica letra por vez!Para armazenar palavras ou textos é preciso usar um vetor de char)
// #include <stdio.h>
// int main() {
//     char letra = 'S';//Aspas duplas dá erro!Sempre use aspas simples
//     printf("%c", letra);//%c - c= caractere ou char
// }



//DANDO UMA TREINADA 
// #include <stdio.h>
// int main (){
//     int num = 10;
//     num = num + 10;
//     printf("Resultado: %d.\n",num);// \n -> representa uma quebra de linha 
// };


//SEGUNDA BRINCADA
//misturando numeros inteiros com numeros de ponto flutuante
// #include <stdio.h>
// int main (){
//     int num = 10;
//     float num2;
//     num2 = num * 3.7444;

//     printf("Resultado: %.3f", num2);
// };