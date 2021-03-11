#include<stdio.h>
#include<conio.h>
int sum( int n)
{

	int i,x=0;
	for(i=1;i<=n;i++)
		{
			x=x+i;
		}
	return x;
}
int main()
{	int n,x ;
	printf("nhap n:");
	scanf("%d",&n);
	printf("\ntong la: %d",	sum(n));
	return 0;
}
