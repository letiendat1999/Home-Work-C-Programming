#include<stdio.h>
#define MAX 100
void nhapMang1(int a[], int n);
void xuatMang1(int a[], int n);
void nhapMang2(int b[], int m);
void xuatMang2(int b[], int m);
int cong2Mang(int a[], int b[], int n, int m);
int main(){
	int n,m,a[MAX],b[MAX];
	do{
		printf("Nhap n = ");
		scanf("%d",&n);
	}while(n<=0);
	
	do{
		printf("\nNhap m = ");
		scanf("%d",&m);
	}while(m!=n);
	
	printf("\nNhap mang 1:");
	nhapMang1(a,n);
	printf("\nNhap mang 2:");
	nhapMang2(b,m);
	cong2Mang(a,b,n,m);
	return 0;
}
void nhapMang1(int a[], int n){
	for(int i=0; i<n; i++){
		printf("\na[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
void xuatMang1(int a[], int n){
	for(int i=0; i<n; i++){
		printf("\na[%d] = %d",i,a[i]);
	}
}
void nhapMang2(int b[], int m){
	for(int i=0; i<m; i++){
		printf("\nb[%d] = ",i);
		scanf("%d",&b[i]);
	}
}
void xuatMang2(int b[], int m){
	for(int i=0; i<m; i++){
		printf("\nb[%d] = %d",i,b[i]);
	}
}
int cong2Mang(int a[], int b[], int n, int m){
	int c[MAX];
	for(int i=0; i<n; i++){
		c[i]=a[i]+b[i];
	}
	printf("\nMang sau khi duoc cong: ");
	for(int i=0; i<n; i++){
		printf("\nc[%d] = %d",i,c[i]);
	}
}
