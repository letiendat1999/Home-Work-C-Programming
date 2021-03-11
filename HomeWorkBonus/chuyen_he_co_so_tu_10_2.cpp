#include<stdio.h>
#include<conio.h>
int chuyenDoi(int a[50], int n);
int main()
{
	int n,a[50];
	printf("Nhap vao gia tri can chuyen: ");
	scanf("%d",&n);
	chuyenDoi(a,n);
	return 0;
	
}
int chuyenDoi(int a[50], int n)
{
	int dem=0,i,coSo=2;
	while(n>0){
		a[dem]=n%coSo;
		n/=coSo;
		dem++;
	}
	printf("\nGia tri nhi phan luc nay la: ");
	for(i=dem-1;i>=0;i--){
		printf("%d",a[i]);
	}
	return 0;
}
