// lệnh continue-thỏa mãn điều kiên => Bỏ qua phần còn lại của vòng lặp hiện tại và tiếp tục với lần lặp tiếp theo.
#include <stdio.h>
int main(){
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;         // nếu i chia hết cho 2 ->bỏ qua phần in và thực hiện vòng lặp for tiếp 
        }
        printf("%d ",i );
    }
    
}