#include <stdio.h>
//Escreva um programa que solicite ao usuario a idade, o montante a depositar e o numero de conta em que se quer realizar o deposito, declarando as variaveis  como short, int, long.
int main() {
    short idade;
    int montante;
    long numero_conta;

    printf("digite sua idade: ");
    scanf("%hd", &idade);

    printf("informe o montante a depositar: ");
    scanf("%d", &montante);

    printf("informe o número da conta: ");
    scanf("%ld", &numero_conta);

    printf("\nOperação:\n");
    printf("Idade: %hd anos\n", idade);
    printf("Montante a depositar: R$ %d\n", montante);
    printf("Número da conta: %ld\n", numero_conta);

    return 0;
}

