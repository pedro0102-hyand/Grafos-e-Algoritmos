#include<stdio.h>
typedef struct{
    int elementos[MAX_SIZE];
    int tamanho;
}Conjunto;
int mdc(int a, int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
bool eh_primo(int num){
    if(num<=1){
        return false;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
void adicionar(Conjunto *conjunto, int elemento){
    if(conjunto->tamanho < MAX_SIZE){
        conjunto->elementos[conjunto->tamanho++]=elemento;
    }else{
    }
}
int contar(Conjunto conjunto){
    int contador=0;
    for(int i=0;i<conjunto.tamanho;i++){
        for(int j=i+1;j<conjunto.tamanho;j++){
            if(mdc(conjunto.elementos[i],conjunto.elementos[j])==1){
            }
        }
    }
    return contador;
}