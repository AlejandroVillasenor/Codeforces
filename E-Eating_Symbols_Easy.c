//AtCoder - abc101_a 
#include <stdio.h>
int main(){
    char s[4];
    int i, n;
    scanf("%s", &s);
    n = 0; 
    for (i = 0; i <= 4; i++){
        if (s[i] == '+'){
            n += 1;  
        }
        else if(s[i] == '-'){
            n -= 1;
        }
    }
    printf("%d", n); 
    return 0;
}