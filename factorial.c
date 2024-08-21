#include <stdio.h>
int n;
int giaithua(int n)
{
    if (n == 1)
    {
        return 1;
        
    }
    return n * giaithua(n-1);
}

int main()
{
    printf("\nNhap 1 so: "), scanf("%d", &n);
    printf("\ngiai thua = %d", giaithua(n));
}