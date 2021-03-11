#include <stdio.h>
void main(void)
{
	int c;
	while(1){
		ClearIndex:
			c=0;
		while(1){
			if(c>100)
				goto ClearIndex;
			++c;
			printf("c = %d\n",c);	
		}
	}
}
