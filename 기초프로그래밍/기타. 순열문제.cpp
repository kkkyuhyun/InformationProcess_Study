#include <stdio.h>
int main()
{
    int n, k;
    long fact1 = 1, fact2 = 1;
    long p = 0;

    printf("����: n>k\n");
    printf("n�� �Է��Ͻÿ�:");
    scanf("%d", &n);
    printf("k�� �Է��Ͻÿ�:");
    scanf("%d", &k);

    for (int i = 1; i <= n; i++)
    {
        fact1 *= i;
    }

    for (int i = 1; i <= n - k; i++)
    {
        fact2 *= i;
    }

    p = fact1 / fact2;
    printf("nPk�� %d�Դϴ�.", p);
	return 0;
}
