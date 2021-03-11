#include<stdio.h>
#include<conio.h>

main(){
	int r;
	float pi = 3.14, chuVi, dienTich;
	
	do{
		printf("Nhap ban kinh: ");
		scanf("%d",&r);
	}while(r<=0);
	chuVi = 2*pi*(float)r;
	dienTich = pi*pi*(float)r;
	printf("\nchu vi la: %.2f", chuVi);
	printf("\ndien tich la: %.2f", dienTich);
}
