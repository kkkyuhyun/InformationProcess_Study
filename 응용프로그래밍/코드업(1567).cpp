#include <stdio.h>
long long int subsetsum(int a, int b, int *d)
{
	long long int sum=0;
	for(int i=a;i<=b;i++)
		sum+=*(d+i);
	return sum;
}

// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int main()
{
  int n, a, b, d[1010]={0};
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d%d", &a, &b);

  printf("%lld\n", subsetsum(a, b,d));
}




