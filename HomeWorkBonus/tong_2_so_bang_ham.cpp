#include<stdio.h>
#include<conio.h>
int cong2so(int a, int b)
{
	return a+b;
}
int main()
{	int a,b;
	printf("moi ban nhap 2 so: ");
	scanf("%d",&a);
	scanf("\n%d",&b);
	cong2so(a,b);
	printf("%d",a+b);
	return 0;
}
