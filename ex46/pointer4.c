#include <stdio.h>
int main(){
    int arr[5]= {1, 2, 3, 4, 5};
    int *ptr = arr;  // *ptr = arr[0]
    ++ptr;  //*ptr = arr[1]
    printf("%d\n", *ptr);
    --ptr; //*ptr = arr[0]
    printf("%d\n", *ptr);
    ptr +=3;  // *ptr = arr[3]
    printf("%d\n", *ptr);
}