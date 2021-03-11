#include<stdio.h>
#define MAX 100
// luu y la chuoi nhap khong co khoang trang
void nhapChuoi(char a[]);
void xuatChuoi(char a[]);
int kiemTraChuA(char a[]);
main(){
	char a[MAX];
	nhapChuoi(a);
	kiemTraChuA(a);
}
void nhapChuoi(char a[]){
	printf("Nhap chuoi: ");
	gets(a);
}
void xuatChuoi(char a[]){
	printf("\nChuoi vua nhap la: ");
	puts(a);
}
int kiemTraChuA(char a[]){
	int n=sizeof(a), count=0;
	for(int i=0; i<n; i++){
		if(a[i]=='a'){		//dua theo bang ma ascii, co the viet theo cach thu 2 la a[i]==97
			count++;
		}
	}
	printf("\nSo ky tu a co trong chuoi la: %d", count);
}
