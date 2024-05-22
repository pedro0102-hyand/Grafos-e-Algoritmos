#include<stdio.h>
#include<stdlib.h>
#define MAX_VERTICES 100
struct Grafo{
    int V;
    int matriz[MAX_VERTICES][MAX_VERTICES];
};
struct Conjunto{
    int elementos[MAX_VERTICES];
    int tamanho;
};
struct Grafo* criarGrafo(int V){
    struct Grafo* grafo = (struct Grafo*)malloc(sizeof(struct Grafo));
    grafo->V=V;
    int i,j;
    for(i=0;i<V;i++){
        for(j=0;j<V;j++){
            grafo->matriz[i][j]=0;
        }
    }
    return grafo;
}
void adicionarAresta(struct Grafo* grafo, int origem,int destino){
    grafo->matriz[origem][destino]=1;
    grafo->matriz[destino][origem]=1;
}
struct Conjunto* criarConjunto(){
    struct Conjunto* conjunto=(struct Conjunto*)malloc(sizeof(struct Conjunto));
    conjunto->tamanho=0;
}
void adicionarElemento(struct Cinjunto* conjunto, int elemento){
    conjunto->elementos[conjunto->tamanho++]=elemento;
}
int subconj(struct Conjunto* A, struct conjunto* B){
    int i,j;
    for(i=0;i<A->tamanho;i++){
        int encontrado=0;
        for(j=0;j<B->tamanho;j++){
            if(A->elementos[i]==B->elementos[i]){
                encontrado=1;
                break;
            }
        }
        if(!encontrado)
            return 0;
    }
    return 1;
}
int verificaClique(struct Grafo* G, struct Conjunto* S){
    struct Conjunto* R=criarConjunto();
    for(i=0;i<S->tamanho;i++){
        adicionarElemento(R,S->elementos[i]);
    }
    for(i=0;i<R->tamanho;i++){
        int r=R->elementos[i];
        int vizinhos[MAX_VERTICES];
        int count=0;
        for(j=0;j<G->V;j++){
            if(G->matriz[r][j]==1){
                vizinhos[count++]=j;
            }
        }
        if(!subconj(R,vizinhos)){
            return 0;
        }
    }
    return 1;
}