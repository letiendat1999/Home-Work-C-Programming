/*
Viet chuong tr�nh nhap 2 so nguy�n a,b (a<b), kiem tra xem c� bao nhi�u so le  tu a den b d�ng v�ng lap while(), in ra c�c so d�
*/

#include <stdio.h>
#include <conio.h>

int main() {
   int a,b,c, count=0;
   do{
   	printf("Nhap a: "); scanf("%d", &a);
   	printf("\nNhap b: "); scanf("%d", &b);
   }while(a>=b);
   
   	while(a<=b){
   		if(a%2 != 0){
   			count++;
   			printf("\n%d", a);
	   	}
		++a;
   }
   printf("\nSo gia tri le tu a den b la: %d", count);
   return 0;
   
}
