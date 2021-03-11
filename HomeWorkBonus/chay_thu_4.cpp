#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[20],b[20],x,i;
	strcpy(a,"Hello");
	strcpy(b,a);
	printf("%d",a[2]);
	for(i=0;i<strlen(a)-1;i++)
		if(i%2==0)
			b[i]=a[i]+1;
		else;
		b[i]=a[i]-1;
	printf("\n%s",b);
	return 0;
}
