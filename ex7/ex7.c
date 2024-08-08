#include <stdio.h>

int main(){

    int a = 5, b = 5, c = 10;
    printf("\n%d == %d is %d ", a, b, a == b);
    printf("\n%d == %d is %d ", a, c, a == c);
    printf("\n%d > %d is %d ", a, b, a > b);
    printf("\n%d > %d is %d ", a, c, a > c);
    printf("\n%d < %d is %d ", a, b, a < b);
    printf("\n%d < %d is %d ", a, c, a < c);
    printf("\n%d != %d is %d ", a, b, a != b);
    printf("\n%d != %d is %d ", a, c, a != c);
    printf("\n%d >= %d is %d ", a, b, a >= b);
    printf("\n%d >= %d is %d ", a, c, a >= c);
    printf("\n%d <= %d is %d ", a, b, a <= b);
    printf("\n%d <= %d is %d ", a, c, a <= c);
// so sánh : đúng(1), sai(0);
}