int main() { 
    float nota;

    printf ("Digite uma nota entre 0 e 10: \n");
    scanf ("%f\n", &nota);

    if(nota>10){
        printf("Digite um valor válido!\n");
    }
    if(nota<0){
        printf("Digite um valor válido!\n");
    }
    return 0;
}