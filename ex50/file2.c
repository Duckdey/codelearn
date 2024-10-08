//đọc dữ liệu từ file
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f;

    //mở file
    f = fopen("ex50.txt", "r");

    if( f== NULL)
    {
        printf("\nloi mo file");
        exit(1);
    }

    //read
    int n;
    fscanf(f, "%d",&n);
    printf("\ngia tri cua n: %d", n);

    //close
    fclose(f);

}
