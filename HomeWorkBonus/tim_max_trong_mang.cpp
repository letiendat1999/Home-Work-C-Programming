#include<stdio.h>
#include<conio.h>
main()
{
	int a[10]={12,2,3,11,5,6,7,8,9,1};
	int x,max=a[0];
	for(x=0;x<10;x++)
		{
			if(a[x]>max)
				max=a[x];
			
		}
	printf("gia tri lon nhat trong mang la: %d",max);
}
