#include<stdio.h>
#include<conio.h>
#define MAX 100
double giaiThua(int x);
void nhap(int n, int a[MAX]);
void xuat(int n, int a[MAX]);
double tong(int x);
int main()
{
	int n,a[MAX],i;
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
	}
	while(n<0 || n>100);
	printf("\nNhap ma tran:\n");
	nhap(n,a);
	printf("\nXuat ma tran:\n");
	xuat(n,a);
	double T=0;
	int dau=1;
	for(i=0;i<n;i++){
		T+=dau*(tong(a[i])/giaiThua(a[i]));
		dau=-dau;
	}
	printf("\nKet qua bieu thuc la: %lf",T);
	int x;
	printf("\nNhap x: ");
	scanf("%d",&x);
	double r=giaiThua(x);
	printf("\ngiai thua cua x la: %.3lf",r);
	return 0;
}
double giaiThua(int x)
{	
	double t=1; 
	if(x==0)
		return 1;
	else{
		for(int i=1;i<=x;i++){
			t*=i;
		}
		return t;
	}
}
void nhap(int n, int a[MAX])
{
	int i;
	for(i=0;i<n;i++){
		
			scanf("%d",&a[i]);
		
	}
}
void xuat(int n, int a[MAX])
{
	int i;
	for(i=0;i<n;i++){
		
			printf("%d\t",a[i]);
		
	}
}

double tong(int x)
{
	int i,dau=1,s=0;
	for(i=1;i<=x;i++){
		s+=dau*i;
		dau=-dau;
	}
	return s;
}

  
