#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Ngaysinh{
    int ngay;
    int thang;
    int nam;
};
int main(){
    FILE *f;

    f= fopen("ex50_3.bin", "rb");
    if ( f== NULL)
    {
        printf("loi");
        exit(1);
    }


    //read
    struct Ngaysinh n1;
    fread(&n1, sizeof(struct Ngaysinh), 1, f);

    printf("\nngay sinh: %2d %2d %2d", n1.ngay, n1.thang, n1.nam);
    getch();
}