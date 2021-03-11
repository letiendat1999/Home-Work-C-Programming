#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int doDaiChuoi(char *ptr){
	int count=0;
	while(*ptr != '\0'){
		count++;
		ptr++;
	}
	return count;
}
main(){
	char chuoi[MAX];
	printf("Nhap chuoi ky tu: ");
	gets(chuoi);
	int length;
	length = doDaiChuoi(chuoi);
	printf("\nDo dai chuoi la: %d",length);
	
}
