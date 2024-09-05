// Exercicio 04
#include <stdbool.h>
#include <stdio.h>    // Para perror e printf

bool segmento(int seq[], int n, int seg[], int k){
    int i, j;

    for(i=0; i<n; i++){
       if(seg[0] == seq[i]){
           int aux = i+1;
           for(j=1; j<k ; j++){
               if(seg[j] == seq[aux]){
                   aux++;

               }else{
                   break;
               }

           }

           if(j==k){
               return true;
           }
       }
    }
    return false;
}
int main(){
    int sequencia[8] = {1, 4, 3, 4, 5, 6, 7, 8};
    int seguimento[1] = {8};

    bool reposta = segmento(sequencia, 8, seguimento, 1);

    if (reposta == true){
        printf("É um segmento");

    }

    else{
        printf("Não é um segmento");
    }

    return -1;
}
