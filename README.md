# aplicacaoEmC
Novo professor ensina C

#include <stdio.h>

void bass (){
    float vetor [] = {1.0,2.0,3.0,4.0,5.0};
    int x;
    for (x=0; x<5; x++) {
        printf ("É %.1f \n", vetor[x]);
    }    
}


int par(){
    int vetor[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int x;
    for (x=0; x<12; x++) {
        if (vetor[x] %2 == 0) {
            printf("Esses números são pares: %d \n", vetor[x]);
        }
    }    
}

int impar(){
    int vetor[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int x;
    for (x=0; x<12; x++) {
        if (vetor[x] %2 == 0) {
            vetor[x]++;
        }
        printf("Vetor modificado: %d \n", vetor[x]);
    }    
}

int des(){
    int vetor[] = {6,8,1,5,9,2,7,3,4};
    int x;
    for (x=0; x<9; x++) {
        printf("Esses são os passos realizados: %d \n", vetor[x]);

    }    
}

int main() {
    int vetor [] = {0,1,1,2,3,5,8,11};
    int x;
    for (x=0; x<8; x++) {
        printf ("É %d \n", vetor[x]);
    }

    bass();
    par();
    impar();
    des();
    
    return 0;
}

