#include <stdio.h>
int N, C;
int main(){
    scanf("%d", &N);
    if (N%1000==0){
        printf("%d", 0);
    }
    else{
    C = 1000-N % 1000;
    printf("%d\n", C);
    }
    return 0;
}