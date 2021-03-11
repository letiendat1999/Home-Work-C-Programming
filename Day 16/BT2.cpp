#include<stdio.h>
#include<stdlib.h>

int swap(int *a, int *b){
	int temp;
	temp = *a;
	*a=*b;
	*b=temp;
}
main(){
	int a,b;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("\nNhap b: ");
	scanf("%d",&b);
	swap(&a,&b);
	printf("\nSau khi trao doi a = %d va b = %d",a,b);
}
