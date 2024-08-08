// bài toán xếp loại học sinh
#include <stdio.h>
#define Yeu "\nhoc sinh yeu"
#define TB "\nhoc sinh trung binh"
#define Kha "\nhoc sinh kha"
#define Gioi "\nhoc sinh gioi"

int main(){
    float diemtoan;
    float diemvan;
    float diemanh;
    float diemtrungbinh;
    printf("\nDiem toan =");
    scanf("%f", &diemtoan);
    printf("\nDiem van =");
    scanf("%f", &diemvan);
    printf("\nDiem anh =");
    scanf("%f", &diemanh);
    diemtrungbinh = (diemtoan + diemvan + diemanh) / 3;
    printf("\nDiem trung binh = %.2f", diemtrungbinh);
    if (diemtrungbinh < 4)
    {
        printf(Yeu);
    }
    else if (diemtrungbinh < 6, 5)
    {
        printf(TB);
    }
    else if (diemtrungbinh < 8)
    {
        printf(Kha);
    }
    else
    {
        printf(Gioi);
    }
}
