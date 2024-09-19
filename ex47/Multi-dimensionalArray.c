// nhập xuất mảng 2 chiều 
#include <stdio.h>
int main(){
    //khai báo: Datatype ArrayName[hàng][cột]
    // khai báo động 
    int n, m;
    printf("nhap so luong hang va so luong cot: ");
    scanf("%d %d", &n, &m);
    int a[n][m];
    for(int i = 0; i < n; i++)
    {
        for( int j = 0; j < m; j++)
        {
            printf("\nnhap phan tu o hang %d va cot %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    } 
    for( int i = 0; i < n; i++)
    {
        for( int j = 0; j < m; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    //khai báo tĩnh 
    // int a[2][3] = {{1,2,3}, {3,2,1}};
    // for( int i = 0; i < 2; i++)
    // {
    //     for( int j = 0; j < 3; j++)
    //     {
    //         printf("%d", a[i][j]);
    //     }
    //     printf("\n");
    // }
}