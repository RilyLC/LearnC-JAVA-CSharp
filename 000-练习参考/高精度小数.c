#include<stdio.h>
int main()
{
	int a, b, quo, mod;
	scanf_s("%d/%d", &a, &b);
	if (10 <= a && a < b && b < 100)
	{	int temp = a % b;
		a = temp * 10;
		printf("0.");
		for (int i = 0; i < 200; i++)
		{	
			quo = a / b;
			mod = a % b;
			printf("%d", quo);
			if (mod == 0)
			{
				break;
			}
			a=mod * 10;
			
		}
		printf("\n");
	}
	return 0;
}