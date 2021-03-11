#include<stdio.h>
#include<conio.h>

bool kiemTraChanLe(int a){
	if(a%2 == 0){
		return 1;	//tra ve 1 tuc la so chan
	}
	else{	//so le
		return 0;	//so le thi tra ve 0
	}
}
main(){
	int a;
	printf("Nhap vao 1 so: ");	scanf("%d", &a);
	if(kiemTraChanLe(a) == 1){
		printf("\nDay la so chan");
	}
	else{
		printf("\nDay la so le");
	}
}
