#include <stdio.h>
#include <conio.h>
int main(){
    int a = 5, c;
    c = a; 
    printf("\nc = %d", c);  
    c += a;
    printf("\nc = %d", c); // c = c+ a
    c -= a;
    printf("\nc = %d", c); // c = c - a
    c *= a;
    printf("\nc = %d", c); // c = c * a
    c /= a;
    printf("\nc = %d", c); // c = c / a
    getch();
}