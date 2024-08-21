#include <stdio.h>
#include <math.h>
long long DectoBin(int DecNumber){
    long long BinNumber = 0;
    int p = 0;
    while (DecNumber > 0)
    {
        BinNumber += (DecNumber % 2) * pow(10, p);
        ++p;
        DecNumber /= 2;
    }
    return BinNumber;

}

    int main()
{
    int DecNumber;
    printf("\nDec = ");scanf("%d", &DecNumber);
    printf("\nBin = %lli", DectoBin(DecNumber));
}