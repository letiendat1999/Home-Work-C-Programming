#include <stdio.h>
 
int max(int n, int m, int a[50][50])	
{	
	int max=a[0][0];
	int i,j;	
	
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
	{
		if(a[i][j]>max)
			max=a[i][j];
	}
	return max;
}
main()
{	
	int a[50][50];
	int i,j,n,m;
	printf("nhap so hang = ");
		scanf("%d",&n);
	printf("\nnhap so cot = ");
		scanf("%d",&m);
	printf("\n");
	for(i=0;i<n;i++)
	{
			for(j=0;j<m;j++)
			{
			printf("nhap a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
				printf("\n");	
			}
	}
	printf("Ma tran vua nhap la:\n");
	for(i=0;i<n;i++)
	{
			for(j=0;j<m;j++)
			{
				printf("%d",a[i][j]);
			}
		printf("\n");
	}
	printf("gia tri lon nhat la: %d",max(n,m,a));
	
	
	
}
