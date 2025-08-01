#include <stdio.h>
//Usando apenas as tecnicas aprendidas, escreva um programa que calcule o quadrado e o cubo dos numeros de 0 à 10 e use tabulações para imprimir a seguinte tabela de valores:
int main(){
    int i;
    printf("Numero | quadrado | cubo\n");
    printf("------------------------\n");
    
    for(i = 0;i <= 10;i++){
        printf("%d |%d |%d\n", i, i*i,i*i*i);
    }

    return 0;
}
