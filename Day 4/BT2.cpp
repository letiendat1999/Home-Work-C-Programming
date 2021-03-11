#include<stdio.h>
#include<conio.h>
#include<math.h>	//su dung ham mu, la ham pow()

main(){
	int n;
	float s=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		s+=pow((float)i,2);
	}
	printf("\nKet qua la: %.2f", s);
	
}
