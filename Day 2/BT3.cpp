/*
Viet chuong tr�nh nhap 2 so nguy�n a,b (10<a<b<50) t�nh tong c�c so chia het cho 3 tu a den b.
*/
#include <stdio.h>
#include <conio.h>

int main() {
   int a,b,count=0;
   do{
   	printf("Nhap a: "); scanf("%d", &a);
   	printf("\nNhap b: "); scanf("%d", &b);
   }while(a>=b || a<=10 || b>=50);
   while(a<=b){
   	if(a%3 == 0){
   		count++;
   		printf("\n%d", a);
	   }
	a++;
   }
   printf("\nSo gia tri chia het cho 3 tu a -> b la: %d", count);
   return 0;
   
}
