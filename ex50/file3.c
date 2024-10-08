//ghi dữ liệu dạng nhị phân 
#include <stdio.h>
#include <stdlib.h>

struct Ngaysinh{
    int ngay;
    int thang;
    int nam;
};
int main(){
    FILE *f;

    f = fopen("ex50_3.bin", "wb");   


    //write
    struct Ngaysinh n1;
    n1.ngay = 1;
    n1.thang = 7;
    n1.nam = 2006;

    fwrite(&n1, sizeof (struct Ngaysinh), 1, f);

    fclose(f);
    
}
