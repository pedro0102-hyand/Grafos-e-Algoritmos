void hanoi(int n, char origem, char destino,char trabalho){
    if(n>0){
        hanoi(n-1,origem,trabalho,destino);
        hanoi(n-1,trabalho,destino,origem);
    }
}
// algoritmo recursivo para calculo das possibilidades da torre de hanoi//
// trabalha com a quantidade de discos n //
// utiliza de pinos de origem, de trabalho e de destino//
// realiza a chamada da funcao, com n-1 discos, iniciando na origem, para chegar ao pino de trabalho, passando pelo pino de destino//
// realiza a chamada da funcao com n-1 discos, iniciando no trabalho para chegar ao destino, passando pela origem//
// complexidade do algortmo segue a ideia de recurssao matemática, com notacao : O(2^n)//
