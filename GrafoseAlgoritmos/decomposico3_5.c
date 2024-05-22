void decomposicao3_5(int k, int *a, int *b){
    if(k<8){
        return;
    }
    if(k==8){
        *a=1;
        *b=1;
        return ;
    }
    int temp_a;
    int temp_b;
    decomposicao3_5(k-1,&temp_a,&temp_b);
    if(temp_b>0){
        *a=temp_a+2;
        *b=temp_b-1;
    }else{
        *a=temp_a-3;
        *b=temp_b+2;
    }
}
// inicializacao da funcao de decomposicao, recebendo como parametros um valor do tipo inteiro k, e dois ponteiros do tipo inteiro a e b//
// realiza a análise da variável k, onde definimos se k<8 entao retorna nada, pois isso nao é capaz de realizar a funcao//
// caso o k seja igual a 8, os ponteiros a e b vao receber o valor de 1//
// criacao das variávesi temporárias de tipo inteiro a e b//
// criacao de uma nova funcao de decomposicao, que recebe como parametros k-1, o valor correspondente atribuido ao ponteiro para a e ao ponteiro para b//
// caso temp_b seja maior que zero, o ponteiro a vai receber a variável temporária a +2 e o ponteir b vai receber a variável temporária b menos um//
// caso contrário ponteiro para a vai recebr variável temporária a menos 3 e ponteiro para b vai receber variável temporária b +2//
// complexidade do algorítmo é : O(k) //