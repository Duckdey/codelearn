#include <stdio.h>
#include <conio.h>
int Fibonacci(int n){
    if(n == 1 || n == 2){
    return 1;
    }    
    return Fibonacci(n - 1)+ Fibonacci(n - 2);
}
int main(){
    int n;
    printf("\nnhap n = ");scanf("%d", &n);
    printf("\nso Fibonacci thu %d la %d ", n, Fibonacci(n));
}