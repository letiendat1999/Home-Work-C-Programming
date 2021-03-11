#include<stdio.h>
#define MAX 1000
main(){
	
	int arr[MAX],n, max;
	printf("Nhap so luong phan tu n: ");		//mang 5 phan tu -> nhap n=5
	scanf("%d", &n);
	//nhap mang
	
	for(int i=0; i<n; i++){
		printf("\nNhap a[%d] = ",i);
		scanf("%d", &arr[i]);
	}
	
	max = arr[0];				//gan bien max cho vi tri dau tien trong mang
	for(int i=0; i<n; i++){	//duyet tung phan tu tu vi tri 0 den n-1
		if(arr[i] > max){		//neu co 1 phan tu nao trong luc duyet ma lon hon max
			max = arr[i];		//thi gan max = phan tu do, lap lai qua trinh
		}
	}
	printf("\nPhan tu lon nhat trong mang la: %d", max);
	
}
