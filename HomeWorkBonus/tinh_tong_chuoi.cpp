#include<stdio.h>
#include<conio.h>
int main()
{
	int m,s=0;
	do{
	
	printf("Nhap m: ");
	scanf("%d",&m);
	}
	while(m<=0);
	for(int i=1;i<=2*m;i++){
		if(i%2==0){
			s+=i;
		}
	}
	printf("\nKet qua la: %d",s);
	return 0;
}
