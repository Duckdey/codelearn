// Nhập chuỗi s từ bàn phím. Kiểm tra tính đối xứng của chuỗi vừa nhập.
#include <stdio.h>
#include <string.h>
char DoiXung(char str1[100])
{
    for(int i = 0; i < strlen(str1) / 2; i++)
    {
        if(str1[i] != str1[strlen(str1) - i - 1])
        {
           return 0;
        }else{
            return 1;
        }
    }
}
int main(){
    int i;
    char str[100];
    printf("nhap chuoi: ");
    gets(str);
    if (DoiXung(str) == 1)
    {
        printf("chuoi doi xung");
    }else{
        printf("chuoi khong doi xung");
    }
    
}