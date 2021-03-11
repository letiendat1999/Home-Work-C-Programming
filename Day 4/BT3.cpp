#include<stdio.h>
#include<conio.h>


main(){
	int n;
	float s=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		s+=1/(float)i;
	}
	printf("\nKet qua la: %.2f", s);
	
}
