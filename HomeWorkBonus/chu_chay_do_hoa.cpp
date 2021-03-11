#include<stdio.h>
#include<conio.h>
#include "console.h"
#include<stdlib.h>
#include<string.h>
struct chuChay
{
	char s[31];
	int x,y;	//y la tung do, x la hoanh do
	
	
};
int main()
{
	chuChay A;
	strcpy (A.s,"DAT DEP TRAI QUA!");
	A.y=0;
	A.x=0;
	while(1)
	{
		system("clc");
		gotoXY(A.x, A.y);
		A.y++;
		Sleep(400);
	}
	return 0;
}
