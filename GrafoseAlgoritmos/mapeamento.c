typedef struc{
    int currentIndex;
}Iterator;
Iterator iniciarIterador(int tamanho){
    Iterator it;
    it.currentIndex=0;
    return it;
}
int chegada(Iterator it, int tamanho){
    return it.currentIndex>=tamanho;
}
void avancar(Iterator *it){
    it->currentIndex++;
}
void mapeamento(int *S, int tamanho, int *L, int (*f)(int)){
    Iterator it = iniciarIterador(tamanho);
    while(!chegada(it,tamanho)){
        int i = S[it.currentIndex];
        L[i]=f(i);
        avancar(&it);
    }
}
// inicializa a criacao de uma estrutura chamada Iterator//
// Cria uma funcao do tipo Iterator chamada de iniciar, que recebe como parametros o tamanho do conjunto S //
// inicializa uma variável chamada it, que recebe currentIndex sendo 0 //
// funcao de chegada que retorna se currentIndex recebendo o tamanho do conjunto S//
//funcao de avancar que recebe um ponteiro it do tipo Iterator, recebendo a variável temporária it recebendo currentIndex e sendo incrementado//
//funcao mapeamento que recebe como parametros o ponteiro s do tipo inteiro, o tamanho do conjunto o vetor L e um ponteiro f do tipo inteiro//
//valida o it como sendo um Iterator e realiza uma atribuicao a funcao iniciarIterator em funcao do tamanho do conjunto//
// enquanto a chegada nao receber it e tamanho, realizará um bubble sort//
//aciona a funcao de avancar em funcao do conteúdo presente no ponteiro de it//
// complexidade do código O(n) //
