/*
 - Biến toàn cục ( được dùng trong cả chương trình )
 - Biến cục bộ  ( chỉ được dùng trong 1 hàm ) 
*/
#include <stdio.h>
int a = 5;   //biến toàn cục 

void Sum(int a, int b){
    int sum = a + b;   //biến cục bộ 
    printf("\nsum = %d", sum);
}

int main(){
    int b = 5;   // biến cục bộ 
    Sum(a, b);
}