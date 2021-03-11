#include<stdio.h>
#include<conio.h>
main()
{
	int a[10]={12,2,3,11,5,6,7,8,9,1};
	int x;
	int max,second;
	if(a[0]>a[1])
		{
			max=a[0];
			second=a[1];
		}
	else
		{
			max=a[1];
			second=a[0];
		}
//chuong trinh xac dinh max second trong mang
	for(x=2;x<10;x++)
		{
			if(max<a[x])
				{
					second=max;
					max=a[x];
					
				}
			else if(a[x]>second)
				{
					second=a[x];
				}
			
		}
	printf("gia tri lon thu 2 trong mang la: %d",second);
}
