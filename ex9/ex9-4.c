#include <stdio.h>
int main(){
    int a;
    printf("Nhap a="); scanf("%d", &a);
    if (a > 0)
    {
        if(a % 2 == 0)
        {printf(" %d là số dương chẵn", a);
        }else{
            printf(" %d là số dương lẻ", a);
        }
    }else if( a == 0){
        printf(" %d la so 0", a);
    }
    else{
        if(a % 2 == 0)
        {printf(" %d là số âm chẵn", a);
        }else{
            printf("%d là số âm lẻ", a);
        }
    }
    

}