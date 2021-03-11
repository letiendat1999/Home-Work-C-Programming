#include<stdio.h>
#define MAX 100

main(){
	int n, arr[MAX], index, b;
	printf("Nhap vao so phan tu cua mang = ");
	scanf("%d", &n);
	printf("\nNhap tung phan tu cho mang: \n");
	for(int i=0; i<n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nNhap vi tri cua phan tu muon thay the = ");
	scanf("%d",&index);
	printf("\nNhap gia tri phan tu muon thay the = ");
	scanf("%d",&b);
	for(int i=0; i<n; i++){
		if(i==index){
			arr[i] = b;
		}
	}
	//mang sau khi da thay the
	for(int i=0; i<n; i++){
		printf("\na[%d] = %d",i,arr[i]);
	}
}
