#include<stdio.h>
#include<conio.h>
int luyThua(int n)
{
	int f;
	for(f=1;n>1;n--)
		{
			f*=n;
		}
	return f;
}
int tinh(int n, int a)
{
	return luyThua(n)/(luyThua(n-a)*luyThua(a));
}
main()
{	int n,i,j;
	printf("Nhap va so hang : ");
	scanf("%d",&n);
	printf("Tam giac Pascal\n\n");	
	for(i=0;i<=n;i++)
		{
			for(j=0;j<=n-i;j++)
			printf(" ");
			for(j=0;j<=i;j++)
			printf("%d ",tinh(i,j));
			printf("\n");
		}
	getchar();
}

