#include<stdio.h>
#define MAX 100
void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
int demSoPhanTuLonNhat(int a[], int n);
int main(){
	int n,a[MAX];
	do{
		printf("Nhap n = ");
		scanf("%d",&n);
	}while(n<=0 || n>=100);
	printf("\nNhap tung phan tu cho mang: \n");
	nhapMang(a,n);
	demSoPhanTuLonNhat(a,n);
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
int demSoPhanTuLonNhat(int a[], int n){
	int count = 0, max;
	max = a[0];
	for(int i=0; i<n; i++){
		if(max < a[i]){
			max = a[i];
		}
	}
	for(int i=0; i<n; i++){
		if(max == a[i]){
			count++;
		}
	}
	printf("\nSo phan tu lon nhat co trong mang la: %d",count);
}
