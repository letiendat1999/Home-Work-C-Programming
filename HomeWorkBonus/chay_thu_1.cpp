#include<stdio.h>
#include<conio.h>
#define MAX 50
int main()
{
	int a[MAX],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\n\n");
	for(int i=0;i<n;i++){
		printf("%5d",a[i]);
	}
	return 0;
}
