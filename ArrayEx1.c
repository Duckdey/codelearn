#include <stdio.h>
int main(){
    // khai báo 
    int arr[10];
    
    for (int i = 0; i < 10; i++)
    {
        arr[i]= i;
    }
    for (int i = 0; i < 10; i++ ){
        printf("\narr[%d]= %d", i, arr[i]);
    }
    

}