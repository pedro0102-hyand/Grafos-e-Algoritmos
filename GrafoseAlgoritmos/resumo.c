int resumo(int *S, int tamanho, int (*g)(int,int)){
    if(tamanho<2){
        return S[0];
    }
    Iterator it = iniciarIterador(tamanho);
    int valor=S[it.currentIndex];
    avancar(&it);
    while(!chegada(it,tamanho)){
        valor=g(S[it.currentIndex],valor);
        avancar(&it);
    }
    return valor;
}
// funcao resumo, que verifica se o tamanho do conjunto é menor que 2, se sim, entao retorna o primeiro valor do conjunto//
// it do tipo Iterator que recebe a funcao iniciarIterador//
// realiza a chamda da funcao avancar//
// caso chegada nao receba it e tamanho, chamamos novamente a funcao avancar e retornamos o valor//
// Complexidade : O(n)//