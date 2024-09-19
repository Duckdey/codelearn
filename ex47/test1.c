// Nhậρ ∨ào ｍột ｍa tɾận n x m, Ꭵn ɾa ｍa tɾận ∨ừa nҺập dướᎥ dạnɡ bảᥒg. Hiển tҺị ϲáϲ phầᥒ tử tɾên hὰng cҺẵn
// củɑ ｍa tɾận. Tìｍ ɡiá tɾị Ɩớn ᥒhất tɾên ϲột 1 củɑ ｍa tɾận
#include <stdio.h>
void NhapMang(int a[][100], int n, int m)
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

void XuatMang(int a[][100], int n, int m)
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

void Chan(int a[][100], int n, int m)
{
    printf("cac phan tu nam o hang chan la:");
    for (int i = 1; i < n; i = i + 2)
    {
        for (int j = 0; j < m; j++)
        {
            printf(" %d ", a[i][j]);
        }
    }
}

int max(int a[][100], int n, int m)
{
    int max = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (max < a[i][0])
            {
                max = a[i][0];
            }
        }
    }
    printf("\nphan tu lon nhat o cot 1 la: %d ", max);
}

int main()
{
    int n, m;
    int a[100][100];
    printf("so luong hang va cot la: ");
    scanf("%d%d", &n, &m);

    NhapMang(a, n, m);

    XuatMang(a, n, m);

    Chan(a, n, m);

    max(a, n, m);
}
