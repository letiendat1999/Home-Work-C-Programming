#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,j;
	n=7;
	printf("Ve tam giac deu:\n\n");
	for(i=n;i>=1;i--)
		{
			for(j=n-i;j>=1;j--)
			printf(" ");
			for(j=i;j>=1;j--)
			printf("* ");
			printf("\n");
		}
	getchar();
}
