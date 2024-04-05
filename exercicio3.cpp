#include <iostream>

int main(){
    int num;
   
    printf("Digite um numero: ");
    scanf("%d!", &num) ;

    if (num < 0) {
        printf("O numero digitado é negativo.\n");
    } else{
        printf("O numero digitado é positivo ou zero.\n");
    } 
    
    return 0;
}