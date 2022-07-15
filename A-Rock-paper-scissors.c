//AtCoder-abc204_a
#include <stdio.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if(x == y){
        printf("%d",x);
    }else if(x == 0 && y == 2 || x == 2 && y == 0){
        printf("1");
    }else if(x == 1 && y == 0 || x == 0 && y == 1){
        printf("2");
    }else{
        printf("0");
    }
    return 0;
}