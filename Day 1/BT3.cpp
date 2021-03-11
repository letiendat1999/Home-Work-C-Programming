#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int a;
	double kq;
	printf("Moi nhap mot so vao: ");	
	scanf("%d", &a);
	if(a >= 0){
		kq = sqrt((double) a);
		printf("\n%.1lf", kq);
	}
	else{
		printf("\nBao loi chuong trinh");
	}
	
}
