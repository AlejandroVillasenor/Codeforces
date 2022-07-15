//AtCoder - abc120_a 
#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", (b/a) <= c ? (b/a) : c);
    return 0;
}
// si b/a es menor o igual a c, entonces se puede hacer c veces, sino solo c veces
//el ? es un operador condicional, y devuelvolviendo un valor binario