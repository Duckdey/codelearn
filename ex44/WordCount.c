#include <stdio.h>
#include <string.h>
int WordCount(char str[], int length)
{
    int word = (str[0] != ' ');
    for(int i = 0; i < length - 1; i++)
    {
        if(str[i] == ' ' && str[i + 1] != ' ')
        {
            word++;
        }
    }
        return word;
}


void Correct(char str[], int length)
{
    int first = 0, last = length - 1;
    // Xóa dấu trắng đầu chuỗi
    while (first < last && str[first] == ' ')
        first++;
    // Xóa dấu trắng cuối chuỗi
    while (last > first && str[last] == ' ')
        last--;

    // Viết hoa chữ cái đầu tiên
    if (str[first] >= 'a' && str[first] <= 'z')
        str[first] -= 32;                       //ASCII
    for (int i = first + 1; i <= last; i++)
    {
        // Đưa hết về chữ thường
        if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
        if (i + 1 <= last)
        {
            // Bỏ dấu trắng thừa ở giữa
            if (str[i] == str[i + 1] && str[i] == ' ')
            {
                continue;
            }
            
        }
        printf("%c", str[i]);
    }
}

int main()
{
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof str, stdin);
    int length = strlen(str) - 1; 
    str[length] =' ';
    printf("So tu cua \"%s\" la %d", str, WordCount(str, length));
    printf("\nXau chuan hoa la: ");
    Correct(str, length);
}