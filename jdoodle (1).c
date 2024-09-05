// Exercicio 04
#include <stdbool.h>
#include <stdio.h>    // Para perror e printf

bool segmento(int seq[8], int seg[3]){
    int i, j, count_true = 0;
    
    for(i=0; i<8; i++){
       if(seg[0] == seq[i]){
           
           for(j=0; j<3 ; j++){
               if(seg[j] == seq[i]){
                   count_true++;
                   
               }
               i++;
           }
       }
    }
    return count_true == 3;
}
int main(){
    int sequencia[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int seguimento[3] = {5, 6, 7};
    
    bool reposta = segmento(sequencia, seguimento);
    
    if (reposta == true){
        printf("É um segmento");
        
    }
    
    else{
        printf("Não é um segmento");
    }
    
    return -1;
}
