#include<stdio.h>
#define MAX 100
void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
void themVaoViTriX(int a[], int n);
int main(){
	int n,a[MAX];
	do{
		printf("Nhap n = ");
		scanf("%d",&n);
	}while(n<=0 || n>=100);
	printf("\nNhap tung phan tu cho mang: \n");
	nhapMang(a,n);
	themVaoViTriX(a,n);
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
void themVaoViTriX(int a[], int n){
	int k,x;
	printf("\nNhap phan tu can them vao dau mang: ");
	scanf("%d",&k);
	printf("\nNhap vi tri can thay the: ");
	scanf("%d",&x);
	for(int i=0; i<n; i++){
		if(i==x){
			a[i]=k;
		}
	}
	for(int i=0; i<n; i++){
		printf("a[%d] = %d\n",i,a[i]);
	}
	
}
