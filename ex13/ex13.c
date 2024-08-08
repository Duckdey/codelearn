// bai tap kiểm tra số a có phải số nguyên tố không ( số chia hết cho 1 và chính nó)
#include <stdio.h>
#include <math.h>
int main(){
    int a;
    int count=0;// count= lệnh  đếm 
    printf("\nNhap a = "); scanf("%d", &a);
    //cách 1 : i xét từ 1 đến a
    for (int i = 1; i <= a; i++)
    {
        if ( a % i == 0)
        {
            count++;
            
        }    
    }
    if (count == 2)
        {
            printf("\n%d la so nguyen to", a);
        }else{
            printf("\n%d khong phai la so nguyen to", a);
        }
// cách 2 : i xét từ 2 đến căn a
// for (int i = 2; i <= sqrt(a); i++)
//     {
//         if ( a % i == 0)
//         {
//             count++;
            
//         }    
//     }
//     if (count == 0)
//         {
//             printf("\n%d la so nguyen to", a);
//         }else{
//             printf("\n%d khong phai la so nguyen to", a);
//         }
}