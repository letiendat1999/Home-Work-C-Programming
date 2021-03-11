#include<stdio.h>
main(){
	const char lookupTable[10]={0,1,4,9,16,25,36,49,64,81};
	char square(char input){
		return lookupTable[input];
	}
}
