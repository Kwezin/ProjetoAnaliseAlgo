// Exercicio 5 da Lista 1

#include <stdbool.h>
#include <stdio.h>    // Para perror e printf

int seq_max(int seq[], int n){
    int i, max = 1, aux = 0;
    
    for(i=0; i<n-1; i++){
        if(seq[i] < seq[i+1]){
            max += 1; 
            if(aux < max){
                aux = max;
            }
        }else{
            max = 1;
            
        }
    }
    
    if (aux > 0){
        return aux;
    }
    
    return max;
   
}
int main(){
    int sequencia[] = {11, 10, 12, 6, 5, 4, 3, 2, 1};
    
    int reposta = seq_max(sequencia, 9);
    
    printf("Sequencia max: %d", reposta);
        
   
    
    return -1;
}