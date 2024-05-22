#include<stdio.h>
#include<stdlib.h>
Typedef struct No{
    int dado;
    struct No* proximo;
}No;
typedef struct Definir{
    No* topo;
}Definir;
No* criarNo(int dado){
    No* novoNo=(No*)malloc(sizeof(No));
    novoNo->dado=dado;
    novoNo->proximo=NULL;
    return novoNo;
}
Definir* criarConjunto(){
    Definir* novoConjunto=(Definir*)malloc(sizeof(Definir));
    novoConjunto->topo=NULL;
    return novoConjunto;
}
void addVetor(Definir* conjunto, int dado){
}
void retirarVetor(Definir* conjunto, int dado){
}
void incluirLista(Definir* conjunto, int dado){
    No* novoNo=criarNo(dado);
    novoNo->proxumo=conjunto->topo;
    conjunto->topo=novoNo;
}
void retirarLista(Definir* conjunto, int dado){
    No* atual=conjunto->topo;
    No* anterior=NULL;
    while(atual!=NULL && atual->dado !=dado){
        anterior=atual;
        atual=atual->proximo;
    }
    if(atual!=NULL){
        if(anterior!=NULL){
            anterior->proximo=atual->proximo;
        }else{
            conjunto->topo=atual->proximo;
        }
        free(atual);
    }
}
void imprimirConjunto(Definir* conjunto){
    No* atual = conjunto->topo;
    while(atual!=NULL){
        printf("%d",atual->proximo);
        atual=atual->proximo;
    }
    print("\n");
}