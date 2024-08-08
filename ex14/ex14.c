//in cac so le <= 10 
// có thể thay thế vòng lặp while bằng vòng lặp for
#include <stdio.h>
int main(){
    int number = 1;

    while (number <= 10)
    {
        if (number % 2 != 0)
        {
         printf("%d\t", number);
        }
        
        number++;
    }
    
    
//    for (int i = 0; i <= 10; i++)
//    {
//     if (i % 2 != 0)
//     {
//         printf(" %d\t", i);
//     }
    
//    }
   
   
    
}