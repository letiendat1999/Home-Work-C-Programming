#include<stdio.h>
#include<stdlib.h>
 
main(){
	int a,b;
	int *p1,*p2;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("\nNhap b: ");
	scanf("%d",&b);
	p1 = &a;
	p2 = &b;
	int sum;
	sum = *p1 + *p2;
	printf("\nTong cua a va b la: %d",sum);
}
