#include <stdio.h>
#include <stdbool.h>
void swap(int *x, int *y){
    int tp = *x;
    *x = *y;
    *y = tp;
}
void BubbleSort(int arr[], int n)
{
    int i; int j;
    bool haveswap = false;
    for(int i = 0; i < n - 1; i++)
    {
        haveswap = false;
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                haveswap = true;
            }
        }
        if(haveswap == false)
        {
            break;
        }
    }
}
void XuatMang(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
        
}
int main(){
    int arr[] = {2, 3, 1, 5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr, n);
    printf("Sorted array: ");
    XuatMang(arr, n);
    return 0;

}