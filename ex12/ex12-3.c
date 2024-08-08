// tính tổng các sô trong khoảng [a;b]
#include <stdio.h>
int main(){
    int a, b;
    int sum;
    a = 1;
    b = 5;
    sum = 0;
    for (int i = a; i <= 5; i++)
    {
        sum += i;// sum = sum + i 
    }
    printf(" sum = %d ", sum);
}