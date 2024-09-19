//Nhậρ ∨ào ｍột ｍa tɾận n x m, Ꭵn ɾa ｍa tɾận ∨ừa nҺập dướᎥ dạnɡ bảᥒg. Sắρ xếρ hὰng 2 the᧐ chiều ɡiá tɾị ϲáϲ
// phầᥒ tử giἀm dần. ᵭưa ɾa màᥒ hìᥒh tổᥒg ϲáϲ phầᥒ tử tɾong ｍa tɾận. Tìｍ ɡiá tɾị Ɩớn ᥒhất tɾong mảng
#include <stdio.h>
void NhapMang(int a[][10], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("so o hang %d va cot %d la: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void XuatMang(int a[][10], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }
}
int GiamDan(int a[][10], int n, int m)
{
    int tg,k;
    for(int j=0;j<m-1;j++)
    {
        for(k=j+1;k<m;k++)
        {
            if(a[1][j]<a[1][k])
            {    
                tg=a[1][j];
                a[1][j]=a[1][k];
                a[1][k]=tg;
            }
        }
    }
    printf("\nma tran vua sap xep hang 2 la: ");
    for(int j=0;j<m;j++)
    {
        printf("%5d",a[1][j]);
    }
}
int max(int a[][10], int n, int m)
{
    int max = a[0][0];
    for( int i = 0; i < n; i++)
    {
        for( int j = 0; j < m; j++)
        {
            if(a[i][j] > max)
                max = a[i][j];         
    }
    }return max;
 }
int main(){
    int n, m;
    int a[10][10];
    printf("so luong hang va cot la: ");
    scanf("%d%d", &n, &m);

    NhapMang(a, n, m);

    XuatMang(a, n, m);

    GiamDan(a, n, m);

    max(a, m, n);
    printf(" max = %d ", max(a, n, m));

    

}