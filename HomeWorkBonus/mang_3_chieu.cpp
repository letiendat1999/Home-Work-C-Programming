#include<stdio.h>
#include<conio.h>
#define MAX 50
int main()
{
	int a[MAX][MAX][MAX],n,i,j,k;
	printf("nhap n: ");
	scanf("%d",&n);
	printf("\nnhap mang 3 chieu: ");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				scanf("%d",&a[i][j][k]);
			}
		}
	}
	printf("\nIn mang 3 chieu:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				printf("%5d",a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}

