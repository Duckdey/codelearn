#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    // tạo file
    FILE *f;

    //mở file
    f= fopen("ex50.txt", "w");   //wrire

    if(f == NULL)
    {
        printf("\nloi mo file");
        exit(1);

    }
    //đọc hoặc ghi 
    int n;
    printf("\nNhap vao so n: ");scanf("%d", &n);

    fprintf(f, "%d", n);      //file -> kiểu -> biến

    fclose(f);
    getch();

}