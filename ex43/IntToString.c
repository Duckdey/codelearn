#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{

  int i=34659;
  char buffer1 [33];
  char buffer2 [33];


//   printf ("Enter a number: ");
//   scanf ("%d",&i);
//   itoa (i,buffer,10);
//   printf ("decimal: %s\n",buffer);
  itoa (i,buffer1,16);
  printf ("hexadecimal: %s\n",buffer1);
  itoa (i,buffer2,2);
  printf ("binary: %s\n",buffer2);
  printf("%s",buffer1 );



  return 0;
 }




