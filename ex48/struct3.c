// xây dựng hàm với tham số là struct
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct HocSinh{
    char ten[50];
    double diem;
};

typedef struct HocSinh Hs;
//cach 1
// Hs nhap(){
//     Hs x; 
//     gets(x.ten);
//     scanf("%lf", &x.diem);
// return x;
// }
void nhap2(Hs *x)
{
    getchar();
    gets(x -> ten);
    scanf("%lf", &x ->diem);
}
void in(Hs a){
    printf("\n%s %.2lf", a.ten, a.diem);
}
int main(){
    // Hs a ;
    // nhap2(&a);
    // in(a);
    Hs a[100];
    int n;
    printf("nhap so luong sinh vien: ");
    scanf("%d", &n);
    for( int i = 0; i < n; i++){
        nhap2(&a[i]);
}
for(int i = 0; i < n; i++)
{
    in(a[i]);
}
}