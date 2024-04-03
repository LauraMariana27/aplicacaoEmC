int main() { 
    int A = 80000;
    int B = 200000;
    int anos = 0;
  
    while(A<B){
        A *= 1.03;
        B *= 1.015;
        anos++;
    }
    printf("%d anos", anos);

    return 0;
}