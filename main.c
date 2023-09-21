#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float num; // 분자
    float den; // 분모 
    float result; // 나누기 결과  
  printf("분자를 입력하세요: ");
  scanf("%f", &num);
  
  printf("분모를 입력하세요 : ");
  scanf("%f", &den);
  
  result = num / den;
  
  printf("나누기의 결과는 %f 입니다. \n", result); 
   
  system("PAUSE");
  
  return 0;
}
