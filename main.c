#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float num; // ����
    float den; // �и� 
    float result; // ������ ���  
  printf("���ڸ� �Է��ϼ���: ");
  scanf("%f", &num);
  
  printf("�и� �Է��ϼ��� : ");
  scanf("%f", &den);
  
  result = num / den;
  
  printf("�������� ����� %f �Դϴ�. \n", result); 
   
  system("PAUSE");
  
  return 0;
}
