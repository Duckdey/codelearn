// Cấu trúc điều khiển switch case
// chương trình có nhiều điều kiện, chương trình duyệt từng điều kiện từ trên xuống dưới, nếu thỏa mãn điều kiện nào thì đoạn code bên trong điều kiện đó sẽ được thực thi.
#include <stdio.h>
int main(){
    int a, b;
    char opera;
    printf("nhap phep toan: ");scanf("%c", &opera);
    printf("nhap so a, b: "); scanf("%d %d", &a, &b);
    switch (opera)
    {
    case '+':  // trường hợp 
        printf(" %d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf(" %d - %d = %d", a, b, a - b);
        break;
        case '*':
        printf(" %d * %d = %d", a, b, a * b);
        break;
        case '/':
        if (b == 0)
        {
            printf("khong the chia cho 0");
        }else{
            printf(" %d / %d = %.2f", a, b, (float)a / b);
        }   
        
        break;
    default:
    printf("khong co phep toan opera");
        break;
    }

}