#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char ten[15];
	char congViec[15];
	int tuoi;
	printf("Moi nhap ten: ");	gets(ten);
	printf("\nMoi nhap cong viec: ");	gets(congViec);
	printf("\nMoi nhap tuoi: ");	scanf("%d", &tuoi);
	printf("\nToi ten la: ");		puts(ten);
	printf("Toi lam nghe: ");		puts(congViec);
	printf("Nam nay toi: ");		printf("%d", tuoi);
	return 0;
}
