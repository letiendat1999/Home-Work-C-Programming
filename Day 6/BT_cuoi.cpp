//s(n) = 1!/1^2 + 2!/2^2 + ... + n!/2^2
#include<stdio.h>
#include<conio.h>

double nhapXuat(int n);
double muHai(int b);
double giaiThua(int a);
double bieuThuc(int n);
main(){
	int n;
	nhapXuat(n);
}
double bieuThuc(int n){
	double s=0;
	for(int i=1; i<=n; i++){
		s += giaiThua((double)i)/muHai(i);
	}
	return s;
}
double giaiThua(int a){
	double kq=1;
	for(int i=1; i<=a; i++){
		kq *= i;
	}
	return kq;
}
double muHai(int b){
	double kq; 
	kq = b*b;
	return kq;
	
}
double nhapXuat(int n){
	do{
		printf("Nhap vao n: ");
		scanf("%d", &n);
		
	}while(n<=0);

	printf("\nKet qua la: %lf", bieuThuc(n));
}

