#include<stdio.h>
#include<conio.h>
#define MAX 50
void xuat(int n, int m, int a[MAX][MAX]);
void nhap(int n, int m, int a[MAX][MAX]);
int main()
{
	int a[MAX][MAX],i,j,n,m;
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
	printf("\nNhap vao ma tran:\n");
	nhap(n,m,a);
	printf("\nXuat ma tran:\n");
	xuat(n,m,a);
	
	float s=0;
	for(i=0;i<n;i=i+2){
		for(j=0;j<m;j++){
			s+=a[i][j];
		}
	}
	printf("\nTong cac phan tu tren hang chan la: %.2f",s);
	int max=a[0][0];
	
	for(i=0;i<n;i++){
		if(max<a[i][0]){
			max=a[i][0];
		}
	}
	printf("\nPhan tu lon nhat trong cot thu 0 la:%d",max);
	return 0;
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
void xuat(int n, int m, int a[MAX][MAX])
{
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

