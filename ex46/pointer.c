#include <stdio.h>
int main(){
    int a = 100;
    int *ptr;

    ptr = &a;
    // địa chỉ 
    printf("Dia chi cua bien a : %d\n", &a);
    printf("Gia tri cua con tro ptr : %d\n", ptr);
    // giá trị 
    printf("Gia tri cua bien a : %d\n", a);
    printf("Gia tri cua bien con tro dang quan ly : %d\n", *ptr);
    // 
    *ptr = 1000; // a = 1000
    printf("Gia tri cua bien a : %d\n", a);
    printf("Gia tri cua bien con tro dang quan ly : %d\n", *ptr);

}