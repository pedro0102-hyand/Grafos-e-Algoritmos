typedef struct{
    int *elem;
    int ampl;
}ConjuntoVetor;
int acessar(ConjuntoVetor, int i){
    if(i<0 || i>=S.ampl){
        i=S.ampl-1;
    }
    return S.elem[i];
}
// funcao que verifica se um dado elemento está dentro do escopo do Vetor Conjunto//
// Caso esteja realiza uma análise do vetor e retorna o valor//
// verificacao da amplitude com relacao ao tamanho do conjunto//
// retorna o último elemento caso o indíce esteja fora do escopo//
// Complexidade constante O(1)//