#include<stdio.h>
int main(void)
{
 int n=9,i,s=0;
 for(i=0;i<4;i++)
 {
 	s=s+n;
 	n=(n*10)+9;
 }
 printf("The sum is %d",s);
}
