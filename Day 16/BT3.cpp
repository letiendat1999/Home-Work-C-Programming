#include<stdio.h>
#include<stdlib.h>
#define MAX 100
main(){
	int a[MAX],n, *ptr;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	printf("\nNhap mang: ");
	for(int i=0; i<n; i++){
		printf("\na[%d] = ",i);
		scanf("%d",&a[i]);
	}
	ptr = &a[0];
	int sum = 0;
	for(int i=0; i<n; i++){
		sum += *ptr;
		ptr++;
	}
	printf("\nTong cac phan tu cua mang la: %d",sum);
}
