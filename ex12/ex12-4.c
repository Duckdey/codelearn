// tính tổng các số chẵn trong đoạn [a;b] 
// có sắn giá trị của biến a và b
#include <stdio.h>
int main(){
    int a, b;
    int sum;
    a = 1;
    b = 10;
    sum = 0;
    for (int i = a; i <= 10; i++)
    {
        if (i % 2 ==0)
        {
            sum += i;
        }
    }
    printf("sum = %d", sum);
}