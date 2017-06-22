#include <stdio.h>
int big(int a[],int n);
int main() {
	int a[20],i,n,r;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter values : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	r=big(a,n);
	printf("Big : %d",r);
	return 0;
}
int big(int a[],int n)
{
	int i,b;
	b=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>b)
		{
			b=a[i];
		}
	}
	return b;
}
