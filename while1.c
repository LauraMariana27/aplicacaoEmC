int main() { 
    float nota;

    printf ("Digite uma nota entre 0 e 10: ");
    scanf ("%f\n", &nota);

    while(nota>10.0 || nota<0.0){
        printf("Digite um valor válido!\n Digite uma nota de 0 a 10: ");
        scanf ("%f\n", &nota);
    }
    return 0;
}