/*
   Hàm đệ quy
   Tính tổng của n chữ số
   */
#include <stdio.h>
int SumRecursion(int n){
    
    if (n == 0)
    {
        return 0;
    }else{
        return n + SumRecursion(n - 1);
    }
/*  n=5
5 + SumRecursion(5-1)
5 + 4 + SumRecursion(4-1)
...
5 + 4 + 3 + 2 + 1 + 0

*/
}
int main(){
    int n;
    printf("\nso chu so = "); scanf("%d", &n);
    int sum = SumRecursion(n);
    printf("\ntong cua %d chu so la %d", n, sum);
}