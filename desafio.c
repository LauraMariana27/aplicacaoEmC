int main(){
    int vetor[] = {6,8,1,5,9,2,7,3,4,10};
    int x;
    int i;
    int aux;

    for (x=0; x<10; x++) {
        for (i=0; i<10; i++) {
            if (vetor[x] < vetor[i]){
                aux = vetor[x];
                vetor[x] = vetor[i];
                vetor[i] = aux;
            }
        }
    }
    printf("\n");
    for(x=0; x<10; x++){
        printf("%d\n", vetor[x]);
    }
    return 0;    
}