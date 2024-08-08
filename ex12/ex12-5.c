// bài toán tính tổng các số chẵn trong đoạn [a;b]
// không có sẵn giá trị của a và b
#include <stdio.h>
int main(){
    int a,b; 
    int sum;
    sum = 0;
    printf("\na = "); scanf(" %d", &a);
    printf("\nb = "); scanf(" %d", &b);
    if (a > b)
    {
        printf("khong thoa man dieu kien (a < b)");
        return 0;
    }
    //cách 1 
//     for (int i = a; i <= b; i++) 
//     {
//         if (i % 2 == 0)
//         {
//             sum += i;
//         }
        
//     }
// printf("\nsum = %d", sum);
// }


// cách 2 
if (a % 2 != 0)
{
    a++;// nếu a%2 khác 0 -> a tăng thêm 1 giá trị -> thành số chẵn
}
for (int i = a; i <=b; i+=2)// i+=2 -> i tăng thêm 2 giá trị 
{
    sum +=i;
}
printf("\nsum = %d", sum);
}
