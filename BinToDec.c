#include <stdio.h>
#include <math.h>
int BinToDec(long long BinaryNumber){
    int p = 0;
    int DecNumber = 0;
    while (BinaryNumber>0)
    {
        DecNumber += (BinaryNumber % 10) * pow(2,p);
        p++;
        BinaryNumber /= 10;
    }
    return DecNumber;
}
int main(){
    long long BinaryNumber;
    printf("\nBin = ");scanf("%lli", &BinaryNumber);
    printf("\nDec = %d", BinToDec(BinaryNumber));
}