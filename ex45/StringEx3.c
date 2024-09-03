// Nhập vào 1 chuỗi và 1 ký tự, kiểm tra ký tự có trong chuỗi hay không, nếu có đưa ra số lần xuất hiện của
//  ký tự đó trong chuỗi
#include <stdio.h>
#include <string.h>
char check(char str[], char n)
{
    int dem = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == n)
        {
            dem++;
        }
    }
        if( dem > 0)
        {
            printf("\nso lan ki tu %c xuat hien la %d", n, dem);
        }else{
            printf("ki tu %c khong xuat hien", n);
        }
        
    
}
int main(){
    char str[100];
    char n;
    int dem;
    printf("nhap chuoi: ");
    gets(str);
    printf("\nnhap ki tu ban muon tim: "); scanf("%c", &n);
    check(str, n);
}
    