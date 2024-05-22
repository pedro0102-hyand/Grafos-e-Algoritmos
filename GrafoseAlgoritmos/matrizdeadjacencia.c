#include<stdio.h>
#include<stdlib.h>
#define MAX_VERTICES 100
struct Grafo{
    int V;
    int matriz[MAX_VERTICES][MAX_VERTICES];
};
struct Grafo* criarGrafo(int V){
    struct Grafo* grafo = (struct Grafo*)malloc(sizeof(struct Grafo));
    grafo->V=V;
    int i,j;
    for(i=0;i<V;i++){
        for(j=0;j<V;j++){
            grafo->maatriz[i][j]=0;
        }
    }
    return grafo;
}
void adicionarAresta(struct Grafo* grafo, int origem, int destino){
    grafo->matriz[origem][destino]=1;
    grafo->matriz[destino][origem]=1;
}
void imprimirGrafo(struct Grafo* grafo){
    for(i=0;i<grafo->V;i++){
        for(j=0;j<grfo->V;j++){
            print("%d",grafo->matriz[i][j]);
        }
    }
}