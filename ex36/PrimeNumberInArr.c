#include <stdio.h>
#include <stdbool.h>
#include <math.h>
void NhapMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nnhap arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}
void XuatMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\narr[%d] = %d", i, arr[i]);
    }
}
bool IsPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int PrimeCount(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (IsPrime(arr[i]))
        {
            count++;
        }
    }
    return count;
}
void PrintPrime(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (IsPrime(arr[i]))
        {
            printf("%d\t", arr[i]);
        }
    }
}
int main()
{
    int arr[100];
    int n;
    do
    {
        printf("\nnhap n = ");
        scanf("%d", &n);
    } while (n < 0 || n > 100);
    NhapMang(arr, n);
    XuatMang(arr, n);
    int primeCount = PrimeCount(arr, n);
    printf("\nso luong so nguyen to la: %d", primeCount);
    if (primeCount > 0)
    {
        printf("\ndanh sach so nguyen to la ");
        PrintPrime(arr, n);
    }
}