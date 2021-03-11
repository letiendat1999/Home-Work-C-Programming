#include<stdio.h>
#define MAX 100
void kiemTraMangTangDan(int a[], int n);
main(){
	int n, a[MAX];
	printf("Nhap n = ");
	scanf("%d",&n);
	for(int i=0;i<n; i++){
		printf("\na[%d] = ",i);
		scanf("%d",&a[i]);
	}
	kiemTraMangTangDan(a,n);	
}
void kiemTraMangTangDan(int a[], int n){
	int count = 0;
	for(int i=0; i<n-1; i++){
		if(a[i+1]>=a[i]){
			count++;
		}
	}
	if(count==(n-1)){
		printf("\nMang nay tang dan");
	}
	else{
		printf("\nMang nay khong tang dan");
	}
}
