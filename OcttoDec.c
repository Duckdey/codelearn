#include <stdio.h>
#include <math.h>

int OcttoDec(int Number){
    int p = 0;
    int DecNumber = 0;
    while(Number > 0){
        DecNumber += (Number % 10) * pow(8, p);
        p++;
        Number /= 10;
    }
    return DecNumber;
}

int main(){
    int OctNumber;
    printf("\nNhap so o co so 8: ");
    scanf("%d", &OctNumber);

    printf("\nDec = %d", OcttoDec(OctNumber));
}