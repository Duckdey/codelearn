#include<stdio.h>
void NhapMang(int arr[], int n){
    for(int i = 0; i < n; i++)
    {
        printf("\narr[%d]= ", i);scanf("%d", &arr[i]);
    }
}
void XuatMang(int arr[], int n){
    for( int i = 0; i < n; i++)
    {
        printf("\narr[%d]= %d", i, arr[i]);
    }
}
int SapXep(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            int tg;
            if(arr[i] < arr[j])
            {
                tg = arr[i];
                arr[i] = arr[j];
                arr[j] = tg;
            }
        }
    }
}
int FindBySort(int arr[], int n){
    SapXep(arr, n);
    return arr[1];
}
int main(){
    int arr[100];
    int n;
    printf("\nnhap so luong mang: ");
    do
    {
        scanf("%d", &n);
    } while (n <= 0|| n > 100);
    NhapMang(arr,n);
    XuatMang(arr,n);
    printf("\nSo lon thu 2 la %d", FindBySort(arr, n));
}