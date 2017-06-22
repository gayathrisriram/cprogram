#include <stdio.h>

int main(void) {
	int i,n,t,p;
	printf("Enter table no. : ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		p=i*n;
		printf("\n%d * %d = %d\n",i,n,p);
	}
	return 0;
}
