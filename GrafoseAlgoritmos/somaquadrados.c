#include<stdio.h>
int f(int x){
    return x*x;
}
int g(int conjunto[], int tamanho){
    int soma=0;
    int i;
    for(i=0;i<tamanho;i++){
        soma=soma+f(conjunto[i]);
    }
    return soma;
}
