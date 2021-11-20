#include<stdio.h>
int main()
{
	double num,sum = 0, count=0, average;
	scanf_s("%lf",&num);
	while (num!=-1)//for循环在这里读起来太复杂了
	{
		sum += num;
		count++;
		scanf_s("%lf",&num);
	}//如果使用do while循环的话,每次都必须判断两次number的值,而while则不用
	average = sum / count;
	printf("%lf\n", average);
	return 0;
}