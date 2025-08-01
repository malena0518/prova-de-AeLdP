#include <stdio.h>
//Escreva um programa que receba a entrada de um numero de cinco digitos, separe o numero em seus digitos componentes e os imprima separados uns dos outros por três espaços.
int main() {
  int num;
  int num1, num2,num3, num4, num5;
  int resto, resto2, resto3;
  printf("digite o numero de 5 digitos: ");
  scanf("%d", &num);
  num1 = num/10000;
  resto = num % 10000;
  num2 = resto/1000;
  resto2 = resto % 1000;
  num3 = resto2/100;
  resto3 = resto2 % 100;
  num4 = resto3/10;
  num5 = resto3 % 10;
  printf("numero separado: %d %d %d %d %d\n", num1, num2, num3, num4, num5);
    return 0;
}
