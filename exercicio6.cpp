#include <iostream>

int main(){
    int num;
   
    printf("Digite um numero de 1 a 7: ");
    scanf("%d!", &num) ;

    if (num == 1) {
        printf("O numero corresponde a segunda-feira.\n");
    } else if (num == 2) {
        printf("O numero corresponde a terca-feira.\n");
    } else if (num == 3) {
        printf("O numero corresponde a quarta-feira.\n");
    } else if (num == 4) {
        printf("O numero corresponde a quinta-feira.\n");
    } else if (num == 5) {
        printf("O numero corresponde a sexta-feira.\n");
    } else if (num == 6) {
        printf("O numero corresponde a sabado.\n");
    } else if (num == 7) {
        printf("O numero corresponde a domingo.\n");
    }
    return 0;
}