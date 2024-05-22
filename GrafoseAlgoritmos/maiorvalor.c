#include<stdio.h>
int maiorVetor(int S[],int p, int r){
    int i=p; //inicializa a contagem dos valores do vetor//
    int j;
    for(j=p+1;j<r;j++){ // realiza a busca no vetor, inicializando do segundo valor até o último//
        if(S[i]<S[j]){//verifica se o valor na posicao i é menor que o valor presente na posicao j//
            i=j; //realiza uma troca entre o valor inicial e o maior valor//
        }
    }
    return j;//retorna o maior valor//
}
// algoritmo de complexidade linear//
// a posicao i representa o primeiro elemento do vetor//
// a posica j indica o maior elemento do vetor//