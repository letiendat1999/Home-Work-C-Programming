#include<stdio.h>
#define MAX 100

main(){
	int n, arr[MAX], max, index;
	printf("Nhap vao so phan tu cua mang = \n");
	scanf("%d", &n);
	printf("\nNhap tung phan tu cho mang: ");
	for(int i=0; i<n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	max = arr[0];
	for(int i=0; i<n; i++){
		if(max<arr[i]){
			max = arr[i];
			index = i;
		}
	}
	printf("\nSo lon nhat trong mang la %d va nam o vi tri %d",max,index);
	
}
