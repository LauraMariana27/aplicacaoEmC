int main() { 
    int base;
    int exp;
    int result = 1;
    int i;
  
      printf("Digite a base: ");
      scanf("%d", &base);
       printf("Digite o expoente: ");
      scanf("%d", &exp);
      for(i=0; i<exp; i++){
        result *= base;
      }
      printf("Resultado: %d", result);

    return 0;
}