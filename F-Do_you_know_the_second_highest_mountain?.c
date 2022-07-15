//AtCoder - abc201_b
#include <stdio.h>
int main(){
    int i, N, T[1001], max[2] = {}, max2[2];
    char S[1001][16];
    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%s %d", S[i], &T[i]);
        if (T[i] > max[0]){
            max2[0] = max[0];
            max2[1] = max[1];
            max[0] = T[i];
            max[1] = i;
        }
        else if (T[i] > max2[0]){
            max2[0] = T[i];
            max2[1] = i;
        }
    }
    printf("%s", S[max2[1]]);
    return 0;
}

