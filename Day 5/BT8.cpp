#include<stdio.h>
#include<conio.h>

int kiemTraTamGiac(int a, int b, int c){
	if(a==b && b==c){
		return 1;	//tam giac deu
	}
	else if((a==b && a!=c) || (b==c && b!=a) ||(c==a && c!=b)){
		return 2;	//tam giac can
	}
	else if((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)){
		return 3;	//tam giac vuong
	}
	else{
		return 4;	//tam giac thuong
	}
	
}
main(){
	int a, b, c, kiemTra;
	do{
		printf("Nhap canh thu nhat: ");
		scanf("%d", &a);
	}while(a<=0);
	do{
		printf("Nhap canh thu hai: ");
		scanf("%d", &b);
	}while(b<=0);
	do{
		printf("Nhap canh thu ba: ");
		scanf("%d", &c);
	}while(c<=0);
	kiemTra = kiemTraTamGiac(a,b,c);
	if(kiemTra == 1){
		printf("\nDay la tam giac deu");
	}
	else if(kiemTra == 2){
		printf("\nDay la tam giac can");
	}
	else if(kiemTra == 3){
		printf("\nDay la tam giac vuong");
	}
	else{
		printf("\nDay la tam giac thuong");
	}
}
