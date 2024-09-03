//Tính độ dài của chuỗi không dùng hàm có sẵn
#include <stdio.h>
int length(char str[])
{
    int i = 0;
    for (; str[i]  ; i++)
    {
       
    }
     return i;
}
int main(){
   char str[100];
    printf("nhap 1 chuoi: ");
    gets(str);
    printf("length = %d", length(str));
}