#include<stdio.h>
#include<conio.h>

double giaiThua(int n);
main(){
	int n;
	double ketQua;
	printf("Nhap vao 1 so: ");	scanf("%d", &n);
	ketQua = giaiThua(n);
	printf("\n%d! = %.3lf", n, ketQua);
}
double giaiThua(int n){
	double s=1;
	for(int i=1; i<=n; i++){
		s*=(double)i;
	}
	return s;
}
