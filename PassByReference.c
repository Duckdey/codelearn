// tham chiếu
#include <stdio.h>

void increment(int *x) {
    *x = *x + 1;
}

int main() {
    int a = 5;
    increment(&a);
    printf("%d\n", a); // Giá trị của a đổi thành 6
    
}