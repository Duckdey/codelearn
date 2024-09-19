#include <stdio.h>
// pass by value : tham trị
// pass by reference : tham chiếu

void tang1(int a)
{
    a += 100;
}
void tang2(int *a)
{
    *a += 100;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 300;
    tang1(a);
    printf("\ngia tri a khi tang 1 ket thuc : %d\n", a);
    tang2(&a);
    printf("\ngia tri a khi tang 1 ket thuc : %d\n", a);
    int x = 100, y = 200;
    swap(&x, &y);
    printf("\ngia tri sau khi swap: x = %d, y = %d", x, y);
}