#include <stdio.h>
int main() 
{
	int n1, n2;
	int i=1;
	int sum1=0;
	int sum2=0;
	
	printf("������ �Է��Ͻÿ�:");
	scanf("%d",&n1);
	printf("������ �Է��Ͻÿ�:");
	scanf("%d",&n2);
	
	while(i<=n1)
	{
		sum1+=i;
		i++;
	}
	i=2;
	while(i<=n2)
	{
		sum2+=i;
		i=i+2;
	}
	
	printf("1���� %d���� ���� %d�Դϴ�.\n",n1,sum1);
	printf("1���� %d���� ¦�� ���� %d�Դϴ�.\n",n2,sum2);
	
	return 0;
}
