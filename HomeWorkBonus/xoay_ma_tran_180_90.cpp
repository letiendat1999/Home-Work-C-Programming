#include<stdio.h>
#include<conio.h>
#define MAX 50
void nhap(int n, int a[MAX][MAX]);
void xuat(int n, int a[MAX][MAX]);
void xoayMaTran90(int a[MAX][MAX],int n);
void xoayMaTran180(int a[MAX][MAX],int n);
int main()
{	
	int n,a[MAX][MAX],i,j,k;
	do{
		printf("Nhap k: ");
		scanf("%d",&k);
	}
	while(k!=180 && k!= 90);
	printf("\nNhap n: ");
	scanf("%d",&n);
	printf("\nNhap ma tran:\n");
	nhap(n,a);
	printf("\nMa tran vua duoc nhap la:\n");
	xuat(n,a);
	
	if(k==90){
		printf("\nMa tran sau khi xoay 90 do la:\n");
		xoayMaTran90(a,n);
		
	}
	else {
		printf("\nMa tran sau khi xoay 180 do la:\n");
		xoayMaTran180(a,n);
		
	}
//	else
	//	printf("\nKet thuc chuong trinh");
	return 0;
	
}
void nhap(int n, int a[MAX][MAX])
{	
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void xuat(int n, int a[MAX][MAX])
{	
		int i,j; 
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

void xoayMaTran90(int a[MAX][MAX],int n)
{	
	int b[MAX][MAX],i,j;
	
	
	
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				b[i][j]=a[n-1-j][i];
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		} 
		
}
void xoayMaTran180(int a[MAX][MAX],int n)
{
	int b[MAX][MAX],c[MAX][MAX],i,j;
	for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				b[i][j]=a[n-1-j][i];
			}
			
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				c[i][j]=b[n-1-j][i];
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		} 
		
}
	
	
	
	

