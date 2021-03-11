#include<stdio.h>
#include<conio.h>

main(){
	int n,s=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		s+=i;
	}
	printf("\nKet qua la: %d", s);
	
}
