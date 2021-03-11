#include<stdio.h>
#define MAX 100
void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
int demSoPhanTuX(int a[], int n);
int main(){
	int n,a[MAX];
	do{
		printf("Nhap n = ");
		scanf("%d",&n);
	}while(n<=0 || n>=100);
	printf("\nNhap tung phan tu cho mang: \n");
	nhapMang(a,n);
	demSoPhanTuX(a,n);
	return 0;
}
void nhapMang(int a[], int n){
	for(int i=0; i<n; i++){
		printf("a[%d] = ",i);
		scanf("%d]\n",&a[i]);
	}
}
void xuatMang(int a[], int n){
	for(int i=0; i<n; i++){
		printf("a[%d] = %d\n",i,a[i]);
	}
}
int demSoPhanTuX(int a[], int n){
	int x, count=0;
	printf("\nNhap vao x: ");
	scanf("%d",&x);
	for(int i=0; i<n; i++){
		if(x==a[i]){
			count++;
		}
	}
	printf("\nSo phan tu x trong mang la: %d",count);
}
