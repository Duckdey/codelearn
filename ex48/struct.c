// khai báo 
#include <stdio.h>
struct sinhvien
{
    int maSv[20];
    char HoTen[40];
    char Quequan[40];
};

typedef struct sinhvien SV;
int main(){
    SV a;
    scanf("%s ", &a.maSv);
    
    gets(a.HoTen);
    
    gets(a.Quequan);
    
    printf(" %s %s %s ", a.maSv, a.HoTen, a.Quequan);
    
    SV b = a;  // gán b = a
    
    printf(" sv2 %s %s %s ", b.maSv, b.HoTen, b.Quequan);
    
    }
