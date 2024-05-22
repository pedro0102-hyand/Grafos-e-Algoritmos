#include<stdio.h>
int SegundoMaior(int S[], int n){ 
    int i,temp;
    int maior=S[0];
    int segundo_maior=S[1];
    if(segundo_maior>maior){
        temp=segundo_maior;
        segundo_maior=maior;
        maior=temp;
    }
    for(i=2;i<n;i++){
        if(S[i]>maior){
            segundo_maior=maior;
            maior=S[i];
        }else if(S[i]>segundo_maior){
            segundo_maior=S[i];
        }
    }
    return segundo_maior;
}
