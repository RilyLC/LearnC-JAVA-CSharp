#include<stdio.h>
int main()
{
	double num,sum = 0, count=0, average;
	scanf_s("%lf",&num);
	while (num!=-1)//forѭ�������������̫������
	{
		sum += num;
		count++;
		scanf_s("%lf",&num);
	}//���ʹ��do whileѭ���Ļ�,ÿ�ζ������ж�����number��ֵ,��while����
	average = sum / count;
	printf("%lf\n", average);
	return 0;
}