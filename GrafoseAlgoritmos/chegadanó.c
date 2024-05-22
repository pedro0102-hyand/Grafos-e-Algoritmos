struct Node{
    int data;
    struct Node* next;
};
int chegada(struct Node* r){
    if(r==NULL){
        return 1;
    }else{
        return 0;
    }
}
// criacao de uma funcao do tipo inteiro chamada chegada, que recebe como parametro o nó chamado r//
// se r for vazio retorna 1 , o que significa verdadeiro//
// se r nao for vazio, retorna 0, o que indica falso//
// complexidade O(1)//