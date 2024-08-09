#include <stdio.h>
int Mintwonum  (int a, int b){
    return (a < b ? a : b);
    /*if a<b :return a
    else return b
    */

}
int Maxtwonum (int a, int b){
    return (a > b ? a : b);
}
int Minthreenum (int a, int b, int c){
    return Mintwonum (a, Mintwonum(b, c));

}
int Maxthreenum (int a, int b, int c){
    return Maxtwonum (a, Maxtwonum(b, c));


}
int main(){
    int firstnum, secondnum, thirdnum;
    printf("\na = "); scanf("%d", &firstnum);
    printf("\nb = "); scanf("%d", &secondnum);
    printf("\nc = "); scanf("%d", &thirdnum);
    printf("\nMinthreenum = %d", Minthreenum(firstnum, secondnum, thirdnum));
    printf("\nMaxthreenum = %d", Maxthreenum(firstnum, secondnum, thirdnum));


}