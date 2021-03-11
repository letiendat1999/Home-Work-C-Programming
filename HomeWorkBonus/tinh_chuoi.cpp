#include<stdio.h>
#include<conio.h>
double tong(int n);
double giaiThua(int a);
int main()
{
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
	}
	while(n<=0);
	double kq=0;
	for(int i=1;i<=n;i++){
		kq+=giaiThua(tong(i));
	}
	printf("\nKet qua la: %.2lf ",kq);
	return 0;
}
double tong(int n)
{
	double s=0;
	for(int i=1;i<=n;i++){
		s+=i;
	}
	return s;
}
double giaiThua(int a)
{
	double t=1;
	if(a==0)
		return 1;
	else{
		for(int i=1;i<=a;i++){
			t*=i;
		}
		return t;
	}
}
