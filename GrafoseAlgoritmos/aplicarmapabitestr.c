#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000 
typedef struct Node {
    unsigned char bitmap[MAX_SIZE / 8]; 
} Node;
typedef struct Set {
    unsigned char bitmap[MAX_SIZE / 8]; 
} Set;
void inicializarNode(Node* node){
    for(int i=0;i<MAX_SIZE/8;i++){
        node->bitmap[i]=0;
    }
}
void initializeSet(Set* set){
    for(int i=0;i<MAX_SIZE/8;i++){
        set->bitmap[i]=0;
    }
}
void incluir(Set* set, int elemento){
    int index=elemento/8;
    int bit=elemento%8;
    set->bitmap[index] |=(1<<bit);
}
void retirar(Set* set, int elemento){
    int index=elemento/8;
    int bit=elemento%8;
    set->bitmap[index] &= ~(1 << bit);
}
int buscar(Set* set, int elemento){
    int index=elemento/8;
    int bit=elemento%8;
    return set->bitmap[index]&(i<<bit);
}