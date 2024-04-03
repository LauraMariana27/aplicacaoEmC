int main (){
    int matriz[5][5] = {
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1},
        {6, 8, 6, 6, 7},
        {5, 6, 3, 2, 1},
        {8, 9, 7, 0, 9}
    };
    int i, j;
    for(i=0; i<5; i++){
            printf("%d\n", matriz[i][i]);
    }
    for(i=0; i<5; i++){
            printf("%d\n", matriz[i][4-i]);
    }
    return 0;
}