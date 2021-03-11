#include<stdio.h>
#include<conio.h>
double tinhBieuThuc(int n);
main(){
	int n;
	double ketQua;
	printf("Nhap vao so n: ");	scanf("%d", &n);
	ketQua = tinhBieuThuc(n);
	printf("\nBieu thuc sau khi tinh la: %.3lf", ketQua);
}
double tinhBieuThuc(int n){
	double s=0;
	for(int i=1; i<=n; i++){
		s+=(double)i/(i+1);
	}
	return s;
}
