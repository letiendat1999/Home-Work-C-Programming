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
	if((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a)){
		printf("\nDay la tam giac can");
	}
	else if(a==b && b==c){
		printf("\nDay la tam giac deu");
	}
	else{
		printf("\nDay la tam giac thuong");
	}
	
}
