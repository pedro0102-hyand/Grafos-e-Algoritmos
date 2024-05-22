#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTICES 100
struct Grafo {
    int V; 
    int matriz[MAX_VERTICES][MAX_VERTICES];
};
struct Fila {
    int elementos[MAX_VERTICES];
    int frente, fundo;
};
struct Grafo* criarGrafo(int V) {
    struct Grafo* grafo = (struct Grafo*)malloc(sizeof(struct Grafo));
    grafo->V = V;
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            grafo->matriz[i][j] = 0;
        }
    }

    return grafo;
}
void adicionarAresta(struct Grafo* grafo, int origem, int destino) {
    grafo->matriz[origem][destino] = 1;
}
struct Fila* criarFila(){
    struct Fila* fila=(struct Fila*)malloc(sizeof(sruct(Fila)));
    fila->frente=fila->fundo=-1;
    return fila;
}
int filaVazia(struct Fila* fila){
    return(fila->frente==-1);
}
void enfila(struct Fila* fila, int elemento){
    if(fila->fundo==MAX_VERTICES-1){
        return 0;
    }
    if(fila->frente==-1){
        fila->frente=0;
    }
    fila->fundo++;
    fila->elemento[fila->fundo]=elemento;
}
int desenfila(struct Fila* fila){
    if(filaVazia(fila)){
        return-1;
    }
    int elemento=fila->elementos[fila->frente];
    if(fila->frente==fila->fundo){
        fila->frente=fila->fundo=-1;
    }else{
        fila->frente++;
    }
    return elemento;
}
void visitar(int vertice){
    printf(vertice);
}
void percursoLargArv(struct Grafo* G, int r){
    struct Fila* F=criarFila();
    enfila(F,r);
    while(!filaVazia(F)){
        int u=desenfila(F);
        visitar(u);
        for(int w=0;w<G->V;w++){
            if(G->matriz[u][w]==1){
                enfila(F,w);
            }
        }
    }
    free(F);
}