// Exercicio 04
#include <stdbool.h>
#include <stdio.h>    // Para perror e printf

bool segmento(int seq[8], int seg[3]){
    int i, j;
    
    for(i=0; i<8; i++){
       if(seg[0] == seq[i]){
           int aux = i+1;
           int count_true = 1;
           for(j=1; j<3 ; j++){
               if(seg[j] == seq[aux]){
                   count_true++;
                   aux++;
                   
               }else{
                   break;
               }
               
           }
           
           if(j==3){ // n
               return true;
           }
       }
    }
    return false;
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
