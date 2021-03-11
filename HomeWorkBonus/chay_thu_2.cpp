#include<stdio.h>
char func1(char a)
{
 char b,s;
 for(b=1,s=0;b;b<<=1)
  if(a&b)
   s++;
 return s;
}

int main()
{
char a=func1('C') ;
printf("%d",a);
return 0;
}
