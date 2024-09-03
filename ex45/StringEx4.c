//Chuyển chuỗi nhập từ bàn phím thành chữ viết hoa, viết thường và viết hoa mỗi chữ cái đầu mỗi từ.
#include <stdio.h>
#include <string.h>
void upper(char str[])
{
    printf("viet hoa: %s", strupr(str));
}
void lower(char str[])
{
    printf("\nviet thuong: %s", strlwr(str));
}
void title(char str[])
{
    for(int i = 0; i < strlen(str); i++)   //str[i] !=' '
    {
        
        if(str[i - 1] == ' ' || i == 0)
        {
            if (str[i ] >= 'a' && str[i ] <= 'z')
            {
                str[i ] = str[i ] - 32;
            }
            
        }
    }
    
}

int main(){
    char str[100];
    printf("nhap mot chuoi: ");
    gets(str);
    upper(str);
    lower(str);
    title(str);
    printf("\nviet hoa dau tu: %s", str);
    

}