#include <stdio.h>

int main(void) {
	int a,i,t[10],j,k,s,d;
	printf("Enter Number : ");
	scanf("%d",&a);
	printf("Enter no. of digits you want to display : ");
	scanf("%d",&d);
	for(i=0;a>0;i++)
	{
		t[i]=a%10;
		a=a/10;
	}
	s=i;
	for(i=0;i<5;i++)
	{
		printf("%d\t",t[i]);
	}
	for(i=0;i<s;i++)
	{
		for(j=i+1;j<s;j++)
		{
			if(t[i]>t[j])
			{
				k=t[i];
				t[i]=t[j];
				t[j]=k;
			}
		}
	}
	printf("\nAfter Sorting");
	for(i=0;i<s;i++)
	{
		printf("\n%d\t",t[i]);
	}
	printf("\nDigits :");
	for(i=0;i<d;i++)
	{
		printf("\t%d",t[i]);
	}
	return 0;
}
