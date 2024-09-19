#include <stdio.h>
int main(){
    // &arr[i] = arr + i
    // arr[i] = *(arr + i)

    int arr[5];
    // for(int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", arr + i);
    }
    // for(int i = 0; i < 5; i++)
    // {
    //     printf("%d", arr[i]);
    // }
    for(int i = 0; i < 5; i++)
    {
        printf("%d", *(arr + i));
    }
}