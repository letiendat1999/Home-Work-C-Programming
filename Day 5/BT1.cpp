#include<stdio.h>
#include<conio.h>

int max(int a, int b){
	int max;
	if(a>b){
		max = a; 
	}
	else if(b>a){
		max = b;
	}
	else{
		max = b;
	}
	return max;
}
main(){
	int so1= 9, so2 = 7;
	int soLonNhat;
	soLonNhat = max(so1, so2);
	printf("Gia tri lon nhat la: %d", soLonNhat);
} 
