#include<stdio.h>
#include<conio.h>
main()
{	
	int i,x;							//khai bao bien
	printf("Nhap so N= ");				//nhap so N vao
	scanf("%d",&x);	
						
	if(x>0)								//so sanh N voi 0, neu >0 thi xuat so le	
		{	
			printf("\nCac so le la: ");
			for(i=0;i<=x;i++)			//cho quet cac so tu 0 den N
				{
					if(i%2==1)			//neu tung so duoc quet la so le thi xuat ra man hinh
					{
						
						printf("%d ",i);	//xuat ra man hinh
						
					}	
					
				}
		}
	else								//N<=0 thi la xuat error
		{
			printf("\nError");
		}
	getchar();
}
