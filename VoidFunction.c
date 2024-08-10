/*
  Hàm không trả về giá trị
  Void: không là kiểu gì cã
  */
 #include <stdio.h>
 void print(int time){
 for (int i = 0; i < time; i++)
 {
    printf("\nstudycode");
 }
 }
 int main(){
   printf("\ntrước khi gọi hàm");
    print(10);
   printf("\nsau khi gọi hàm");

 }