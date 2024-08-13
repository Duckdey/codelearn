// số armstrong :  tổng các lũy thừa của các chữ số trong số đó bằng chính số đó. (lũy thừa = số chữ số)
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int CountDigit(int n){
    int count = 0;
    while (n>0)
    {
        n /= 10;
        count++;
    }
    return count;
    
}
bool IsArmstrong(int n)
{
    int numDigit = CountDigit(n);
    int tmp = n, sum = 0, last;
    while (tmp > 0)
    {
        last = tmp % 10; 
        tmp /= 10;       
        sum += pow(last, numDigit);
    }
    if (sum == n)
        return true;
    return false;
}
int main()
{
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);

    if (IsArmstrong(n) == true)
    {
        printf("\n%d la so armstrong!", n);
    }else{
        printf("\n%d khong la so armstrong!", n);
    }
}