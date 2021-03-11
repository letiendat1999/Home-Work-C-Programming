#include<stdio.h>
#include<conio.h>
#define MAX 50
void nhap(int n, int a[MAX][MAX]);
void xuat(int n, int a[MAX][MAX]);
int kiemTraSoNguyenTo(int x);
int main()
{
	int a[MAX][MAX],i,j,n=3;

	printf("\nNhap ma tran :\n");
	nhap(n,a);
	printf("\nXuat ma tran ra:\n");
	xuat(n,a);
	printf("\nCac so nguyen to trong ma tran la:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			
				if(kiemTraSoNguyenTo(a[i][j])==1){
					printf("%d\t",a[i][j]);
				}
			
		}
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
			
				printf("%5d",a[i][j]);
			
			
		}
		printf("\n");
	}
}
int kiemTraSoNguyenTo(int x)
{
	int dem=0;
	for(int k=1;k<=x;k++)
		if(x%k==0)
			dem++;
		if(dem==2)
			return 1;
		return 0;
		
}
