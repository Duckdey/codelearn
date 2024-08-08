#include <stdio.h>
int main(){
    int a, b;
    printf("\nNhập a= "); scanf("%d", &a);
    printf("\nNhập b= "); scanf("%d", &b);
    int sum = a + b;
    printf("\n %d + %d = %d", a, b, sum);
    
    int sub = a - b;
    printf("\n %d - %d = %d", a, b, sub);

    int mul = a * b;
    printf("\n %d * %d = %d", a, b, mul);

    int div = a / b;
    printf("\n %d / %d = %d", a, b, div);


}