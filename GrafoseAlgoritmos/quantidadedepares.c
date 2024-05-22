
struct Node {
    int data;
    struct Node* next;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode != NULL) {
        newNode->data = data;
        newNode->next = NULL;
    }
    return newNode;
}
struct Node* partida(struct Node* S) {
    return S;
}
int chegada(struct Node* r) {
    return (r == NULL);
}
struct Node* avancar(struct Node* r) {
    if (r != NULL) {
        return r->next;
    } else {
        return NULL;
    }
}
int quantPares(struct Node* S){
    int q=0;
    struct Node* r = partida(s);
    while(!chegada(r)){
        if(r->data%2==0){
            q++;
        }
        r=avancar(r);
    }
    return q;
}
// o conjunto S que contém os valores é representado pela estrutura de dados Nó, bem como as suas principais funcoes//
// associa a estrutura r do tipo Nó a funcao de partida em funcao do conjunto s//
// equanto tivermos a funcao de chegada em funcao de r, realizaremos a análise de r//
// se r for um número pár , entao incrementamos q//
// associamos r a funcao avancar em funcao de r//
// retornamos q//
// Complexidade : O(n)//
