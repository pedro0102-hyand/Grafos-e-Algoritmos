#include <stdio.h>
typedef struct {
    int ncorr;
    int icorr;
    int sulco;
    int *mapa;
} NodeMapaBit;
int bitSeguinte(int *mapa, int inicio) {
    return bitSeguinte(mapa, inicio); 
}
NodeMapaBit avancar(NodeMapaBit r) {
    r.icorr = bitSeguinte(r.mapa, r.icorr);
    while (r.icorr < 0 && r.ncorr < r.sulco - 1) {
        r.ncorr++;
        r.icorr = bitSeguinte(r.mapa[r.ncorr], -1);
    }
    return r;
}
NodeMapaBit partida(NodeMapaBit S) {
    NodeMapaBit r = {0, -1, S.sulco, S.mapa};
    return avancar(r);
}
int alvo(NodeMapaBit r) {
    if (r.ncorr < 0)
        return -1; 
    else
        return (r.ncorr * LOGARQ) + r.icorr; 
}
// sulco é número total de elementos do conjunto//
// funcao avancar passa para o próximo bit no mapa de bits, recebe um nó do mapa de bits e atualiza este nó para o próximo bit//
// funcao de partida retorna o nó relativo ao ponto de partida de uma enumeracao no conjunto de mapa de bits//
// funcao avancar posiciona o nó na primeira posicao válida do mapa de bits//
// funcao alvo retorna o elemento alvejado pelo nó do mapa de bits//


