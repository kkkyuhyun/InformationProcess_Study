#include <stdio.h>
void f(int a, int b)   //���� ���� ����, call by value  
{
	int temp=a;
	a=b;
	b=temp;
	printf("������ a�ּ� = %d, ������ b�ּ� = %d\n",&a,&b);
	printf("�����Լ� a=%d, b=%d\n",a,b);   //20,10
	
}
int main()
{
	int a=10,b=20;
	printf("������ a�ּ� = %d, ������ b�ּ� = %d\n",&a,&b); 
	printf("�Լ� ȣ���� a=%d, b=%d\n",a,b); //10,20
	f(a,b);
	printf("�Լ� ȣ���� a=%d, b=%d\n",a,b);  //10,20
	
	
	return 0;
}
