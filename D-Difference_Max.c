//AtCoder - abc196_a
#include <stdio.h>
int main(){
   int a,b,c,d,x,y;
   scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>=b){
        x=a;
    }
    else{
        x=b;
    }
    if(c<=d){
        y=c;
    }
    else{
        y=d;
    } 
    printf("%d",x-y);
    return 0;
}

