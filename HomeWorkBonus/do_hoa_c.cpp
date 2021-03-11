#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>
#include "console.h"

struct chuChay
{
	char s[31];
	int x,y;
	
};
int main()
{
	chuChay A;
	strcpy(A.s,"DAT DEP TRAI QUA AHIHI!");
	A.x=0;
	A.y=0;
	while(1)
	{
		system("clc");
		gotoXY(A.x,A.y);
		printf("%s",A.s);
		A.y++;
		Sleep(100);	
	}
	return 0;
	
}
