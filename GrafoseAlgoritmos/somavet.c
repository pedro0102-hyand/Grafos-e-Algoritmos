#include<stdio.h>
int somaVetor(int S[], int p, int r){
    int s = S[p]; // inicializa o valor de s como sendo o primeiro valor do vetor//
    int j;
    for(j=p+1;j<r;j++){ //realiza a leitura de todos os outros valores do vetor, iniciando a partir do segundo valor até o seu limite//
        s+=S[j]; //realiza a soma de cada um dos elementos do vetor//
    }
    return s; // retorna a sua soma//
}
// algoritmo de complexidade linear//