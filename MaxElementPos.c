#include <stdio.h>

#define MAX_SIZE 100 

void NhapMang(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("Nhap arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void XuatMang(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("\narr[%d] = %d", i, arr[i]);
    }
}

int MaxElement(int a[], int n){
    int maxValue = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] > maxValue){
            maxValue = a[i];
        }
    }
    return maxValue;
}

void GetMaxPosition(int a[], int n){
    int maxValue = MaxElement(a, n);
    printf("\nVi tri cua phan tu lon nhat: ");
    for(int i = 0; i < n; i++){
        if(a[i] == maxValue){
            printf("%5d", i + 1);
        }
    }
}

int main(){
    int arr[MAX_SIZE];

    int n; 
    do{
        printf("Nhap n = ");
        scanf("%d", &n);
    }while(n <= 0 || n > MAX_SIZE);   
    NhapMang(arr, n);
    XuatMang(arr, n);

    GetMaxPosition(arr, n);

}