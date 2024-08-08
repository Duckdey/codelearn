// lệnh break - thỏa mãn điều kiện ->thoát hoàn toàn khỏi vòng lặp 
#include <stdio.h>
int main(){
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break;      // nếu i = 5 -> kết thúc vòng lặp 
        }
        printf("%d ", i);
    
    }
    
}