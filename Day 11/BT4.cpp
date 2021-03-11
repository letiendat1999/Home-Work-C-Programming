#include<stdio.h>
#define MAX 100
void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
int timSoChanCuoiCung(int a[], int n);
int main(){
	int n,a[MAX];
	do{
		printf("Nhap n = ");
		scanf("%d",&n);
	}while(n<=0 || n>=100);
	printf("\nNhap tung phan tu cho mang: \n");
	nhapMang(a,n);
	timSoChanCuoiCung(a,n);
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
int timSoChanCuoiCung(int a[], int n){
	int index;
	for(int i=n-1; i>=0; i--){
		if(a[i]%2==0){
			index=a[i];
			break;
		}
	}
	printf("\nSo chan cuoi cung trong mang la: %d",index);
}
