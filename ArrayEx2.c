#include <stdio.h>
#define Max_Size 100
void NhapMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nNhap arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}
void XuatMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\narr[%d]= %d", i, arr[i]);
    }
}

int main()
{
    int arr[Max_Size];
    int n;
    do
    {
        printf("\nn = ");
        scanf("%d", &n);
    } while (n <= 0 || n > Max_Size);
    NhapMang(arr, n);
    XuatMang(arr, n);
}
