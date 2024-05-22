struct Node{
    int data;
    struct Node* next;
};
struct Node* createNode(int data){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    if(newNode != NUll){
        newNode->data=data;
        newNode->next=NULL;
    }
    return newNode;
}
struct Node* avancar(struct Node* r){
    if(r!=NULL && r->next!=NULL){
        return r->next;
    }else{
        return NULL;
    }
}
// criacao de uma funcao chamada criar Nó do tipo Nó, que recebe como parametro um dado do tipo inteiro//
// realiza a alocacao dinamica do novo Nó//
// novo nó nao for vazio, novo nó que aponta pra dado vai receber o próprio dado e novo nó que aponta para proximo nó será vazio//
// retorna o novo nó//
// criacao da funcao avancar em funcao do nó r//
//se r nao for vazio e o proximo nó existir entao retornaremos r-> proximo, avancando os nós//
// complexidade : O(1)//