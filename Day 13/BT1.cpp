#include<stdio.h>
#define MAX 100
// luu y la chuoi nhap khong co khoang trang
void nhapChuoi(char a[]);
void xuatChuoi(char a[]);
main(){
	char a[MAX];
	nhapChuoi(a);
	xuatChuoi(a);
}
void nhapChuoi(char a[]){
	printf("Nhap chuoi: ");
	gets(a);
}
void xuatChuoi(char a[]){
	printf("\nChuoi vua nhap la: ");
	puts(a);
}
