#include <stdio.h>

int main(void) {
	int y;
	printf("Enter the Year : ");
	scanf("%d",&y);
	if(y%4==0)
	{
		if(y%100==0)
		{
			if(y%400==0)
			{
				printf("%d is a leap year",y);
			}
			else
			{
				printf("%d is not a leap year",y);
			}
		}
		else
			printf("%d is a leap year",y);
	}
	else
		printf("%d is not a leap year",y);
	return 0;
}
