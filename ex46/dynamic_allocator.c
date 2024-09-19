// ptr = (castType*) malloc(size);
#include <stdio.h>
#include <stdlib.h>

// try to dynamic allocate an array in C

int main()
{
    int *a, n = 5;

    a = (int *)malloc(n* sizeof(int));
    printf("%d %d %d",a,a+1, sizeof(int));

    printf("Them phan tu: ");
    int m;
    scanf("%d", &m);

    a = (int*)realloc(a, m* sizeof(int));
    for (int i = n; i < n+m; ++i)
    {
        printf("Nhap gia tri %d: ", i+1);
        scanf("%d", a + i);
        printf("\n");
    }

    //     int a[5], n, m;
    // for (int i = 0; i < n; i++)
    //     {
    //         printf("%d\n", a[i]);
    //     }

    //     for (int i = n; i < n+m; ++i)
    //  {
    //          printf("Nhap gia tri %d: ", i+1);
    //          scanf("%d", a + i);
    //          printf("\n");
    //      }
    

}
