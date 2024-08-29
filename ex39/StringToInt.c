#include<stdio.h> 
int main() 
{ 
    const char *str = "12345 nguyen "; 
    int x; 
    sscanf(str, "%d", &x); //hàm sscanf- đọc dữ liệu từ 1 chuỗi
    printf("\nThe value of x : %d", x); 
    return 0; 
}