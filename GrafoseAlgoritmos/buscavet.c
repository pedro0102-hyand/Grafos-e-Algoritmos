typedef struct Node {
    int data;
    struct Node *next;
} Node;
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
Node* buscar(Node* S, int i){
    Node* r = S;
    while(r!=NULL && r->data!=i){
        r=r->next;
    }
    return r;
}
//funcao do tipo nó que realiza a busca de um elemento em um vetor conjunto S//
// atribui a r do tipo Nó o valor do conjunto S//
// enqunato S nao for vazio e r que aponta para dados for diferente de i, realiza a busca e avanca para o próximo nó//
// retorna r//
// Complexidade : O(n)//