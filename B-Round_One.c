//AtCoder - abc148_a
#include <stdio.h>
int main(){
    int a, b;
    int sum = 1;// 
    scanf("%d %d", &a, &b);
while(sum == a || sum == b ){
    sum += 1;  
  }
    printf("%d", sum);
    return 0;
}