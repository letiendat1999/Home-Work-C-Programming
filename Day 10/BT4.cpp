#include<stdio.h>
#define MAX 100

main(){
	int n, arr[MAX], index;
	printf("Nhap vao so phan tu cua mang = ");
	scanf("%d", &n);
	printf("\nNhap tung phan tu cho mang: \n");
	for(int i=0; i<n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nNhap vi tri cua phan tu muon xoa = ");
	scanf("%d",&index);
	for(int i=index; i<n-1; i++){
		arr[i] = arr[i+1];
	}
	n--;
	//in mang ra sau khi da xoa phan tu o vi tri index
	for(int i=0; i<n; i++){
		printf("\na[%d] = %d",i,arr[i]);
	}
}
