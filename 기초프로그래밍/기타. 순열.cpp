/*#include <stdio.h>
int main()
{
	int n,k,npk,i;
	
	printf("n ���� �Է��Ͻÿ� (n>k):");
	scanf("%d",&n);
	
	printf("k ���� �Է��Ͻÿ�:");
	scanf("%d",&k);
	
	npk =1;
	for(i=n; i>=n-k+1;i--)
	{
		npk =npk*i;
		
	} 
	 printf("������ ���� %d�Դϴ�.\n", npk);
	 
	 return 0; 
}*/
/*
#include <stdio.h>
int main()
 {
    int n, k;

    printf("�ȳ� : n > k�̴�.\n");
	printf("���� n�� �Է��Ͻÿ� : ");
    scanf("%d", &n);
	printf("���� k�� �Է��Ͻÿ� : ");
    scanf("%d", &k);

    int result = 1;

    for (int i = n; i >= n - k+1; i--) 
		{
		
            result *= i;
        }
     printf("���� %dP%d�� %d�Դϴ�.\n", n, k, result);
	return 0;
}
