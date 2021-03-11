#include<stdio.h>
#include<conio.h>

main(){
	int n,i=1;
	double giaiThua=1;
	printf("Nhap n: ");
	scanf("%d",&n);
	while(i<=n){
		giaiThua *= i;
		i++;
	}
	printf("\n%d! = %.2lf", n, giaiThua);
}
