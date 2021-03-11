#include<stdio.h>
#include<stdlib.h>
#define MAX 100
main(){
	int a[MAX],n, *ptr;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	ptr = &a[0];  //gan con tro la phan tu dau tien cua mang
	printf("\nNhap mang: ");
	for(int i=0; i<n; i++){
		printf("\na[%d] = ",i);
		scanf("%d",ptr);
		ptr++;
	}
	ptr = &a[0];
	printf("\nMang vua nhap la: ");
	for(int i=0; i<n; i++){
		printf("%d ",*ptr);
		ptr++;
	}

}
