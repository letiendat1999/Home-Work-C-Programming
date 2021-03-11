#include<stdio.h>
main()
{
	int i,j,k,n;
	k=1;
	n=5;
	for(i=1;i<n;i++){
		for(j=1;j<=i;j++)
		printf("%d",k++);
	printf("\n");
	}
}
