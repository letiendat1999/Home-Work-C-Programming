#include<stdio.h>
#include<conio.h>
float giaiThua(int a);
int tong(int a);
int main()
{
	int i,n;
	double T=0,S=0;
	printf("Moi ban nhap vao n: ");	scanf("%d",&n);
	for(i=1;i<=n;i++){
		T+=tong(i)/giaiThua(i);
		S+=giaiThua(tong(i));
	}
	printf("\nKet qua cua chuoi la: %lf va %lf",T,S);
	return 0;
}
int tong(int a){
	int s=0,i;
	for(i=1;i<=a;i++)
		s+=i;
	return s;
}
float giaiThua(int a){
	int i,t=1;
	for(i=1;i<=a;i++)
		t*=i;
	return t;
}
