#include<stdio.h>
#include<string.h>
int main()
{
	int a[10],i,max,min;
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	max = a[0];
	min = a[0];
	for (i = 1; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	printf("最大值为%d\n最小值为%d\n", max, min);
}