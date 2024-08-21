#include <stdio.h>
void NhapMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\narr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}
void XuatMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n%d\t", arr[i]);
    }
}
void TangDan(int arr[], int n)
{
    int tg;
    for (int i = 0; i < n; i++)
    {
        for (int f = i + 1; f < n; f++)
        {
            if (arr[i] > arr[f])
            {
                tg = arr[i];
                arr[i] = arr[f];
                arr[f] = tg;
            }
        }
    }
}
void GiamDan(int arr[], int n)
{
    int tg;
    for (int i = 0; i < n; i++)
    {
        for (int f = i + 1; f < n; f++)
        {
            if (arr[i] < arr[f])
            {
                tg = arr[i];
                arr[i] = arr[f];
                arr[f] = tg;
            }
        }
    }
}
int main()
{
    int arr[100];
    int n;
    printf("\nnhap so luong phan tu: ");
    do
    {
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("\nnhap lai so luong phan tu:");
        }
    } while (n <= 0);
    NhapMang(arr, n);
    printf("\nMang vua nhap la :");
    XuatMang(arr, n);
    
    TangDan(arr, n);
    printf("\nthu tu tang dan : ");
    XuatMang(arr,n);
    
    GiamDan(arr, n);
    printf("\nthu tu giam dan : ");
    XuatMang(arr, n);
}