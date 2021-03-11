#include<stdio.h>
#include <stdbool.h>
#include<conio.h>
bool kiemTraSoNguyenTo(int n){
	int i;
	if(n<2){
		return false;
	}
	for(i=2;i<(n-1);i++){
		if(n%i==0){
		
			return false;
		}
	}
	return true;
	
}
main(){
	int i,n,max=2;
	printf("nhap n: ");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		if(kiemTraSoNguyenTo(i)){
			if(i>max){
				max=i;
			}
		}
	}
		printf("so nguyen to lon nhat la %d",max);
}


