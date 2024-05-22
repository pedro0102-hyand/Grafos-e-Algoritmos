#include<stdio.h>
int f(int x, int b){
    return x*b/2;
}
bool estaNoConjunto(int conjunto[],int tamanho, int elemento){
    int i;
    for (i=0;i<tamanho;i++){
        if(conjunto[i]==elemento){
            return true;
        }else{
            return false;
        }
    }
}
void ConjuntoFechado(int conjunto[], int *tamanho, int b){
    bool modificado;
    int i,resultado;
    do{
        modificado=false;
        for(i=0;i< *tamanho;i++){
            resultado=f(conjunto[i],b);
            if(!ConjuntoFechado(conjunto,*tamanho,resultado)){
                conjunto[*tamanho]=resultado;
                (*tamanho)++;
                modificado=true;
            }
        }
    }while(modificado);
}