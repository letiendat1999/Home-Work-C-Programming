#include<stdio.h>
#include<conio.h>

main(){
	
	float weight, height, bmi;
	printf("Nhap can nang: ");
	scanf("%f", &weight);
	printf("Nhap chieu cao: ");
	scanf("%f", &height);
	bmi = weight/(height*height);
	if(bmi < 18.5){
		printf("\nNguoi nay bi thieu can");
	}
	else if(bmi > 18.5 && bmi < 24.9){
		printf("\nNguoi nay binh thuong");
	}
	else{
		printf("\nNguoi nay thua can");
	}
}
