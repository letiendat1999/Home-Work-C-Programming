#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i;
	char s[50];
	printf("Nhap so thuc vao: ");
	gets(s);
	int n=strlen(s);
	int j=n+1;
	printf("\nPhan nguyen la: ");
	for(i=0;i<n;i++){
		if(s[i] != '.'){
			printf("%c",s[i]);
		}
		else{
			j=i;
			break;
		}
	}
	printf("\nPhan thap phan la: ");
	for(i=j+1;i<n;i++){
		printf("%c",s[i]);
	}
	if(j==n+1){
		printf("khong co");
	}
	return 0;
}
