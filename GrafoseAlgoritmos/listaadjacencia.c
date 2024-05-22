#include<stdio.h>
#include<stdlib.h>
struct No{
    int destino;
    struct No* proximo;
};
struct Lista{
    struct No* cabeca;
};
struct Grafo{
    int V;
    struct Lista* array;
};
struct No* novoNo(int destino){
    struct NO* novoNo=(struct No*)malloc(sizeof(struct No));
    novoNo->destino=destino;
    novoNo->proximo=NULL;
    returno novoNo;
}
struct Grafo* criargrafo(int V){
    struct Grafo* grafo = (struct Grafo*)malloc(sizeof(struct Grafo));
    grafo->V=V;
    gravo->array=(struct Lista*)malloc(V* sizeof(struct Lista));
    int i;
    for(i=0;i<V;++i){
        grfao->array[i].cabeca=NULL;
    }
    return grafo;
}
void adicionarAresta(struct Grafo grafo, int origem,int destino){
    struct No* novoNo=novoNo(destino);
    novoNo->proximo=grafo->array[origem].cabeca;
    grafo->array[origem].cabeca-novoNo;
    novoNo=novoNo(origem);
    novoNo->proximo=grafo->array[destino].cabeca;
    grafo->array[destino].cabeca=novoNo;
}
void imprimirGrafo(struct Grafo* grafo){
    int v;
    for(v=0; v< grafo->V ; ++v){
        struct No* temp= grafo->array[v].cabeca;
        printf(v);
        while(temp){
            printf("-> %d",temp->destino);
            temp=temp->proximo;
        }
    }
}