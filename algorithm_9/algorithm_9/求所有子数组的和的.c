#include<stdio.h>
#define M 8
int main()
{
	int arr[M], max, i, j, sum;
	sum = 0;
	for (i = 0; i < M; ++i)
	{
		scanf("%d", &arr[i]);
	}
	i = 0;
	max = arr[0];
	for (i = 0; i < M; ++i)
	{
		for (j = i; j < M; ++j)
		{
			sum += arr[j];
			if (sum > max)
			{
				max = sum;
			}
		}
		sum = 0;
	}
	printf("%d\n", max);

	return 0;
}