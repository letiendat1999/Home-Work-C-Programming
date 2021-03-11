#include<stdio.h>
#define MAX 100

main(){
	int n, arr[MAX], lonNhat, lonNhi;
	printf("Nhap vao so phan tu cua mang = ");
	scanf("%d", &n);
	printf("\nNhap tung phan tu cho mang: \n");
	for(int i=0; i<n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	//gia dinh so lon nhat va so lon nhi
	
	
	if(arr[0] > arr[1]){
		lonNhat = arr[0];
		lonNhi = arr[1];
	}
	else{
		lonNhat = arr[1];
		lonNhi = arr[0];
	}
	//tim gia tri lon thu 2 cua mang
	for(int i=2; i<n; i++){
		if(arr[i] > lonNhat){
			lonNhi =  lonNhat;
			lonNhat = arr[i];
		}
		else if(arr[i] > lonNhi && arr[i] < lonNhat){
			lonNhi = arr[i];
		}
		
	}
	printf("\nPhan tu lon nhat la %d va phan tu lon thu hai la %d",lonNhat,lonNhi);
	
}
