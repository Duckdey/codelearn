#include <stdio.h>
int main (){
    int a, b;
    printf("Nhập a= "); scanf("%d", &a);
    printf("Nhập b= "); scanf("%d", &b);

    if (a > b){
        printf(" %d > %d", a, b);
    }
    else if (a == b){
        printf(" %d = %d", a, b);
    }
    else{
        printf("%d < %d", a, b);
    }
    
}
//3 trường hợp(1 trường hợp trung gian)
