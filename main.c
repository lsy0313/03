#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char ch;
  
  printf("input a character : ");
  scanf ("%c", &ch);
   
  printf("The next character of %c (%d) is %c (%d) \n", ch, ch, ch + 1, ch + 1);
  
  system("PAUSE");
  
  return 0;
}
