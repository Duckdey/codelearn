//viết các số nguyên tố từ 1 -> 100
#include <stdio.h>
#include <math.h>
int main(){
    

    for (int num = 1; num < 100 ; num++)
    {int count = 0;
    for (int i = 2; i <= sqrt(num) ; i++)   //sqrt là căn 
    {
        if (num % i == 0)
        {
         count++;
        }
        
    }
    if (count == 0)
    
        printf(" %d \t", num);
        }
    
}
//i lấy giá trị từ 2 
// i nhỏ hơn căn của num
// ex: i <= căn 9 -> i: 2, 3
// số(num) chia hết cho i -> count + 1  (ex 9 chia hết cho 3 -> count =1)
// nếu count = 0 ( ex: số num là 7 -> i < căn 7 ->i = 2, mà 7 không chia hết cho 2 -> count = 0 )-> số nguyên tố