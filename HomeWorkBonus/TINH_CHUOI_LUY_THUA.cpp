#include<stdio.h>
#include<conio.h>
#include<math.h>
float luyThua(int x, int n);
int giaiThua(int a);
int main()
{	int x,n,i;
	float f;
	printf("Moi ban nhap vao x: ");
	scanf("%d",&x);
	printf("\nMoi ban nhap vao n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		f += luyThua(x,i)/giaiThua(i);
	}
	printf("\nket qua la: %.4f",f);
	return 0;	
	
}
int giaiThua(int a)
{
	int i,s=1;
	for(i=1;i<=a;i++)
		s*=i;
	return s;
	
		
}
float luyThua(int x, int n)
{
	int i,t=1;
	for(i=1;i<=n;i++)
		t*=x;
	return t;
	
}

