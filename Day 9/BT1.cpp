#include<stdio.h>
#define MAX 1000
main(){
	
	int arr[MAX],n;
	printf("Nhap so luong phan tu n: ");		//mang 5 phan tu -> nhap n=5
	scanf("%d", &n);
	//nhap mang
	
	for(int i=0; i<n; i++){
		printf("\nNhap a[%d] = ",i);
		scanf("%d", &arr[i]);
	}
	//Xuat mang ra
	printf("\nMang vua nhap la: ");
	for(int i=0; i<n; i++){
		printf("a[%d] = %d ",i,arr[i]);
	}
}
