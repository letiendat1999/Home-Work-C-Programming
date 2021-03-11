#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	printf("Bang cuu chuong la:\n");
	for(i=2;i<=9;i++)
		{
			for(j=1;j<=10;j++)
				{
					printf("%dx%d=%d  ",i,j,i*j);
					
				}
			
			printf("\n");
			
		}
	getchar();
}

