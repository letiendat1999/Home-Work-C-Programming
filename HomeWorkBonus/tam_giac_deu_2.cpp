#include<stdio.h>
main()
{
	int i,j,n;
	n=5;
	for(i=1;i<=n;i++){
		for(j=1;j<i;j++)
			printf(" ");
		for(j=i;j<=n;j++)
			printf("* ");
		printf("\n");
	}
}
