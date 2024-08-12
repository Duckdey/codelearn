//lệnh return: thoát hàm 
#include <stdio.h>

int function(){
    int a = 5;
    return a;
    printf("\na = %d", a); // không thực hiện 
}

int main(){
    int value = function();
    printf("\nExit program...");
}