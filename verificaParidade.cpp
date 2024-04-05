#include <iostream>

int main(){
    int num;
   
    printf("Digite um numero: ");
    scanf("%d!", &num) ;

    if (num % 2 == 0) {
        printf("O numero digitado é par.\n");
    }

    return 0;
}