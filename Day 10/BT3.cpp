#include<stdio.h>
#define MAX 100

main(){
	int n, arr[MAX], check;
	printf("Nhap vao so phan tu cua mang = ");
	scanf("%d", &n);
	printf("\nNhap tung phan tu cho mang: \n");
	for(int i=0; i<n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++){
		if(arr[i] != arr[n-i-1]){
			check = 0;
		}
		else{
			check = 1;
		}
	}
	if(check==0){
		printf("\nMang nay khong doi xung");
	}
	else{
		printf("\nMang nay doi xung");
	}
}

