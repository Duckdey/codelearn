// struct lồng nhau
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct date
    {
        int Ngay, thang, nam;
    };
struct time
    {
    int Gio, phut;
    };
struct Ve
{
    struct date NgayThang;
    struct time GioXem;
    char TenPhim[20];
    double Giave;
};

int main(){
    struct Ve v;
    v.TenPhim;
    v.NgayThang.Ngay;
    v.NgayThang.thang;
    v.NgayThang.nam;
    v.GioXem.Gio;
    v.GioXem.phut;
    v.Giave;
}





