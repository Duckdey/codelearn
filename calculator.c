#include <stdio.h>
int add(int a, int b){
    int sum = a + b;
    return sum;
}
int sub(int a, int b){
    return a - b;
}
int mul(int a, int b){
    return a*b;
}
float div(int a,int b){
    return (float)a/b;
}
int main(){
    int a=3, b=4;
    printf("\n%d + %d = %d", a, b, add(a, b));
    printf("\n%d - %d = %d", a, b, sub(a,b));
    printf("\n%d * %d = %d", a, b, mul(a, b));
    if (b != 0)
    {
    printf("\n%d / %d = %f", a, b, div(a, b));
        
    }
    

    
}