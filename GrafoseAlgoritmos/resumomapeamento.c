int resumoMapeamento(int *S, int tamanho, int (*f)(int), int (*g)(int,int)){
    if(tamanho<2){
        return f(S[0]);
    }
    Iteratir it = iniciarIterador(tamanho);
    int valor=f(S[it.currentIndex]);
    avancar(&it);
    while(!chegada(it,tamanho)){
        valor=g(f(S[it.currentIndex]),valor);
        avancar(&it);
    }
    return valor;
}
//funcao que realiza o cálculo de um resumo de um conjunto S, usando funcoes f e g //
// complexidade O(n)//