#include<stdio.h>
#define MAX 1000
main(){
	
	int arr[MAX],n, count=0;
	float sum=0;
	printf("Nhap so luong phan tu n: ");		//mang 5 phan tu -> nhap n=5
	scanf("%d", &n);
	//nhap mang
	
	for(int i=0; i<n; i++){
		printf("\nNhap a[%d] = ",i);
		scanf("%d", &arr[i]);
	}
	
	//tinh trung binh cong cac so le o vi tri chan trong mang vua nhap
	for(int i=0; i<n; i++){
		if(i%2==0){
			if(arr[i]%2!=0){
				count++;
				sum+=arr[i];
			}
		}
	}
	printf("\nTrung binh cong la: %.2f", sum/(int)count);
}
