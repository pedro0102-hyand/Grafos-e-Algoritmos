struct Node{
    int data;
    struct Node* next;
};
int alvo(struct Node* r){
    if(r==NULL){
        return -1;
    }else{
        return r->data;
    }
}
// Funcao que cria uma estrutura de dados nó, que possui um nó que aponta para o proóximo nó seguinte//
// funcao alvo que recebe como parametro uma estrutura chamada r do tipo nó//
// caso r seja vazio, retorna -1, caso contrario retorna o elemento presente no nó//
// complexidade : O(1)//