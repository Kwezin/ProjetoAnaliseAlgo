//Exercicio 03
#include <stdio.h>

int bitonic(int v[], int inicio, int fim){
    int meio = (inicio +fim)/2;
    
    
    if(v[meio] > v[meio+1] && v[meio] > v[meio-1]){
        return v[meio];
    }
    
    else if(v[meio-1] > v[meio]){
        fim = meio;
        return bitonic(v, inicio, fim);
    }else{
        inicio = meio;
        return bitonic(v, inicio, fim);
    }
}
int main(){
    
    int v[] = {1, 2, 4, 8, 22, 29, 23, 20};
    int inicio = 0;
    int fim = 8;
    
    int resposta = bitonic(v, inicio, fim);
    printf("%d", resposta);
}