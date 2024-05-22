#include<stdio.h>
int fatorial(int n){
    int fat=1; //define a inicializaca do fatorial como sendo 1//
    while(n>1){ // enquanto o nosso n for maior que um, realizará o processo de calculo do fatorial n.(n-1).(n-2)...//
        fat=fat*n;
        n--;
    }
    return fat;//retorna o resultado da conta//
}
// código de complexidade linear//