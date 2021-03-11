#include<stdio.h>
#include<conio.h>

int tinhTong(int n){
	int s=0;
	for(int i=1; i<=n; i++){
		if(i%5 == 0){
			s+=i;
		}
	}
	return s;
}
main(){
	int n, ketQua;
	do{
		printf("Nhap vao n ");	scanf("%d", &n);
	}while(n<=0);
	ketQua = tinhTong(n);
	printf("\nKet qua can tinh la: %d", ketQua);
}
