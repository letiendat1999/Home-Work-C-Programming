#include<stdio.h>
main()
{
	int i,j,n;
	printf("Moi ban nhap n:");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("* ");
		printf("\n");
	}
}

