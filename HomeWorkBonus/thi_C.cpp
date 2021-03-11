#include<stdio.h>
#include<conio.h>
#define MAX 50
int kiemTraSoNguyenTo(int x);
void xuat(int n,int m,int a[MAX][MAX]);
void nhap(int n, int m, int a[MAX][MAX]);
int main()
{
	int i,j,n,m,a[MAX][MAX];
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
	}
	while(n<0 || n>50);
	do{
		printf("\nNhap m: ");
		scanf("%d",&m);
	}
	while(m<0 || m>50);
	printf("\nNhap ma tran:\n");
	nhap(n,m,a);
	printf("\nXuat ma tran:\n");
	xuat(n,m,a);

	int max=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(kiemTraSoNguyenTo(a[i][j])==1){
				if(max<a[i][j]){
					max=a[i][j];
			}				}

		}
	}
		printf("\nSo nguyen to lon nhat trong mang la: %d",max);
	
	int t=0;
	
	for(i=0;i<m;i++){
		int m1=0;
		for(j=0;j<n;j++){
			if(kiemTraSoNguyenTo(a[i][j])==1 && m1<a[i][j] ){
				
					m1=a[i][j];
					
				
			}
			
		}
		t+=m1;
	}
	printf("\nTong cac so nguyen to lon nhat trong moi cot la: %d",t);
	
}
void nhap(int n, int m, int a[MAX][MAX])
{
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void xuat(int n,int m,int a[MAX][MAX])
{
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
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
