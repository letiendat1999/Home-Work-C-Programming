#include<stdio.h>
#include<conio.h>
#define MAX 50
void nhap(int n, int a[MAX][MAX]);
void xuat(int n, int a[MAX][MAX]);
int main()
{
	int k,n,a[MAX][MAX],b[MAX][MAX],c[MAX][MAX];
	int i,j;
	do{
		printf("Nhap k: ");
		scanf("%d",&k);
	}
	while(k!=0 && k!=1 && k!= 2 && k!=3);
	printf("\nNhap n: ");
	scanf("%d",&n);
	printf("\nNhap ma tran thu 1: ");
	nhap(n,a);
	printf("\nNhap ma tran thu 2: ");
	nhap(n,b);
	printf("\nMa tran thu 1 la:\n");
	xuat(n,a);
	printf("\nMa tran thu 2 la:\n");
	xuat(n,b);
	if(k==1){
		printf("\nMa tran tong la:\n");
		/*for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				c[i][j]=a[i][j]+b[i][j];
			}
		}*/
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				c[i][j]=a[i][j]+b[i][j];
				printf("%5d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	else if(k==2){
		printf("\nMa tran hieu la:\n");
	/*	for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				c[i][j]=a[i][j]-b[i][j];
			}
		}*/
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				c[i][j]=a[i][j]-b[i][j];
				printf("%5d\t",c[i][j]);
			}
			printf("\n");
		}
		
	}
	else if(k==3){
		printf("\nMa tran tich la:\n");
	/*	for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				c[i][j]=a[i][j]*b[i][j];
			}
		}*/
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				c[i][j]=a[i][j]*b[i][j];
				printf("%5d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
	
		printf("\nKet thuc chuong trinh");
		getch();
}
		
	return 0;
}
void nhap(int n, int a[MAX][MAX])
{
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void xuat(int n, int a[MAX][MAX])
{
	for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				
				printf("%5d\t",a[i][j]);
			}
			printf("\n");
		}
}

