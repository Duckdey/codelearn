//vòng lặp do while (kiểm tra giá trị nhập vào )
// nhập 1 số xem số đó có phải số nguyên dương không, nếu sai thì bắt nhập lại 
#include<stdio.h>
int main(){
    int a;
    do
    {
        printf("nhap a = ", a);
        scanf("%d", &a);
    } while (a < 1);
    printf(" %d thoa man", a);
    
}