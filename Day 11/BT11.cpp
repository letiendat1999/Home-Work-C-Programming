#include<stdio.h>
#define MAX 100
void kiemTraMangGiamDan(int a[], int n);
main(){
	int n, a[MAX];
	printf("Nhap n = ");
	scanf("%d",&n);
	for(int i=0;i<n; i++){
		printf("\na[%d] = ",i);
		scanf("%d",&a[i]);
	}
	kiemTraMangGiamDan(a,n);
}
void kiemTraMangGiamDan(int a[], int n){
	int count = 0;
	for(int i=0; i<n-1; i++){
		if(a[i]>=a[i+1]){
			count++;
		}
	}
	if(count==(n-1)){
		printf("\nMang nay giam dan");
	}
	else{
		printf("\nMang nay khong giam dan");
	}
}
