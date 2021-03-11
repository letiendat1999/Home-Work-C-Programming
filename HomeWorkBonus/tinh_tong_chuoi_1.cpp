#include<stdio.h>
#include<conio.h>
double luyThua(int a, int n);
int main()
{
	int x,n;
	double s;
	do{
		printf("Nhap x: ");
		scanf("%d",&x);
	}
	while(x<=0);
	do{
		printf("\nNhap n: ");
		scanf("%d",&n);
	}
	while(n<=0);
	for(int i=1;i<=n;i++){
		s+=luyThua(x,i);
	}
	printf("\nKet qua la: %.3lf",s);
	return 0;
}
double luyThua(int a, int n)
{
	double t=1;
	for(int i=1;i<=n;i++){
		t*=a;
	}
	return t;
	
}

