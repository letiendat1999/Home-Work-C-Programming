#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,j,k;
	n=7;
	k=1;
	printf("Ve tam giac deu:\n\n");
	for(i=1;i<=n;i++)
		{
			
			for(j=1;j<=i;j++)
			printf("%d ",k++);
			for(j=1;j<=n-i;j++)
			printf("  ");
			printf("\n");
		}
	getchar();
}
