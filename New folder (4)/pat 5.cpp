#include<stdio.h>
int main()
{
	int i,j,s,n;
	scanf("%d",&n);
	for(i=0;i<n/2;i++)
	{
		for(s=0;s<i;s++)
		printf(" ");
		for(j=0;j<n/2-i;j++)
		printf("*");
		printf("\n");
	}
	for(i=n/2;i<n;i++)
	{
		for(s=0;s<n-i-1;s++)
		printf(" ");
		for(j=0;j<n/2-s;j++)
		printf("*");
		printf("\n");
	}
}
