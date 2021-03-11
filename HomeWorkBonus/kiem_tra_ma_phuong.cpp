#include<stdio.h>
#include<conio.h>
void swap(int *x, int *y);
int main()
{	
	int a,b;
	printf("Nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Nhap so thu hai: ");
	scanf("%d",&b);
	swap(&a,&b);
	printf("\nSau khi hoan doi:");
	printf("\nSo thu nhat la: %d",a);
	printf("\nSo thu hai la: %d",b);
	return 0;
}
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	
}
