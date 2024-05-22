#include<stdio.h>
#include<stdlib.h>
#define MAX_VERTICES 100
struct Grafo{
    int V;
    int matriz[MAX_VERTICES][MAX_VERTICES];
};
Struct Grafo* criarGrafo(int V){
    struct Grafo* grafo =(struct Grafo*)malloc(sizeof(struct Grafo));
    grafo->V=V;
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            grafo->matriz[i][j]=0;
        }
    }
    return grafo;
}
void adicionarAresta(struct Grafo* grafo, int origem,int destino){
    grafo->matriz[origem][destino]=1;
}
int grau(struct Grafo* G, int v){
    int grau=0;
    for(int i=0;i<G->V;i++){
        if(G->matriz[v][i]==1){
            grau++;
        }
    }
    return grau;
}
int removerMax(int heap[], int* n){
    int max=heap[0];
    heap[0]=heap[*n-1];
    (*n)--;
    heapify(heap,*n,0);
    return max;
}
void heapify(int heap[], int n, int i){
    int maior=i;
    int esq=2*i +1;
    int dir=2*i+2;
    if(esq<n && heap[esq]>heap[maior]){
        maior=esq;
    }
    if(dir<m && heap[dir]>heamp[maior]){
        maior=dir;
    }
    if(maior!=i){
        int temp=heap[i];
        heap[i]=heap[maior];
        heap[maior]=temp;
        heapify(heap,n,maior);
    }
}
int aciclico(struct Grafo* G){
    int d[MAX_VERTICES];
    int heap[MAX_VERTICES];
    int n=G->V;
    for(int i=0;i<G->V;i++){
        heap[i]=i;
        d[i]=grau(G,i);
    }
    for(int i=n/2-1;i>=0;i--){
        heapify(heap,n,i);
    }
    while(n>0 && d[heap[0]]<=1){
        int v=removerMax(heap,&n);
        if(d[v]==1){
            for(int i=0;i<G->V;i++){
                if(G-matrix[v][i]==1){
                    d[i]--;
                    for(int j=0;j<n;j++){
                        if(heap[j]==i){
                            heapify(heap,n,j);
                            brak;
                        }
                    }
                }
            }
        }
    }
}
return n> 0 ? 0:1;
