#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[50],temp;
	printf("Nhap chuoi ky tu vao: ");
	gets(s);
	int i,j,n=strlen(s);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(s[i]>s[j]){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}	
		}
	}
	printf("\nChuoi ky tu sau khi sap xep la: %s",s);
	for(int i=0;i<n;i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i]+=32;
		}
	}
	printf("\n%s",s);
	return 0;
}
