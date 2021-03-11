#include<stdio.h>
int main()
{
/*	//float s;
	int a=5,b=9,c;
	int m=a>b ? a++ : b++;
	int n=a<b ? --a : --b;
	c=--n+(++m);
	//s=3*5%4-2*16>32 && 31/6<7;
	printf("\n%d",c); */
	/*int i=1;
	switch(i);
	{
		case1: printf("\t%d",i); i+=3;
		case2: printf("\t%d",i); i+=4;
		
	}
	printf("\t%d",i); */
	int x=8,y=1;
	switch(x--,y++){
		case 1:x*=8; //x=56 y=2
		case 2: y*=x/=2; //x=28 //y=56
		case 3:
		
		case 4:y--; //y=55
		default: x+=5; //x=33
	}
	printf("\n%d %d",x,y);
	int _123=0;
	printf("\n%d",_123);
	int P=10;
	switch(P)
	{
		case 10: printf("\ncase 2");
		break;
	}
	return 0;
}
