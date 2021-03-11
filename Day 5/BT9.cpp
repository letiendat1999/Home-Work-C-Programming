#include<stdio.h>
#include<conio.h>

double luyThua(int x, int n);
main(){
	int x, n;
	do{
		printf("Nhap x: ");	scanf("%d", &x);
	}while(x<=0);
	do{
		printf("Nhap n: ");	scanf("%d", &n);
	}while(n<=0);
	double ketQua = luyThua(x,n);
	printf("%d ^ %d = %.2lf", x, n, ketQua);	
}
double luyThua(int x, int n){
	double s=1;
	for(int i=1; i<=n; i++){
		s*=(double)x;
	}
	return s;
}
