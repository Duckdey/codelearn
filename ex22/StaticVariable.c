// biến static (chỉ khai báo 1 lần)
#include <stdio.h>

// static int c;
void display(){
    // c = 0
    static int c = 0;
    printf("%d ", c);
    c += 5;

}
int main(){
    display();
    display();
}