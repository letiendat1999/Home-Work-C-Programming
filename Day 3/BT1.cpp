#include<stdio.h>
#include<conio.h>

main(){
	int a,b,c;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("\nNhap b: ");
	scanf("%d",&b);
	printf("\nNhap c: ");
	scanf("%d",&c);
	if((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b)){
		printf("\nDay la tam giac vuong");
	}
	else{
		printf("\nDay khong phai la tam giac vuong");
	}
	
}
