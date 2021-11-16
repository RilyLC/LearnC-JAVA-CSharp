#include<stdio.h>
int main()
{
	int BJtime, hour1, minute1, utchour;
	scanf_s("%d", &BJtime);
	if (BJtime <= 2359)
	{
		if (BJtime >= 0)
		{
			hour1 = BJtime / 100;
			minute1 = BJtime % 100;
			if (hour1 > 8)
			{
				utchour = hour1 - 8;
				if (minute1 < 10)
				{
					printf("%d0%d", utchour, minute1);
				}
				else
				{
					printf("%d%d", utchour, minute1);
				}
			}
			else if (hour1 == 8)
			{
					printf("%d", minute1);
			}
			else
			{
				utchour = 24 - (8 - hour1);
				if (minute1 < 10)
				{
					printf("%d0%d", utchour, minute1);
				}
				else
				{
					printf("%d%d", utchour, minute1);
				}
			}
		}
	}
	return 0;
}