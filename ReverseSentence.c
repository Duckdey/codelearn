#include <stdio.h>
void Reverse(){
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        Reverse();
        printf("%c", c);
    }
    
}
int main(){
    printf("\nEnter your sentence: ");
    Reverse();
}