#include<stdio.h>
#include<conio.h>
int tong(int m);
int main()
{
	int m;
	do{
		printf("Nhap m: ");
		scanf("%d",&m);
	}
	while(m<=0);
	printf("\nKet qua la: %d",tong(m));
	
	return 0;
}
int tong(int m)
{
	int s=0;
	for(int i=1;i<=2*m;i++){
		if(i%2==0){
			s+=i;
		}
	}
	return s;
}
