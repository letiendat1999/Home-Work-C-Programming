/*
De bai:
Viet chuong tr�nh nhap 1 so nguy�n n (50<=n<=100), kiem tra c� bao nhi�u so chan tu 1 toi n, in ra c�c so chan do
*/
#include <stdio.h>
#include <conio.h>

int main() {
   int n, count=0;
   do{
   	printf("Nhap n: ");	scanf("%d", &n);
   }while(n>100 || n<50);
//   printf("\n");
   for(int i=1; i<=n; i++){
		if(i%2 == 0){
			count++;
			printf("\n%d", i);
		}
   }
   printf("\nSo gia tri la so chan tu 1 den n: %d", count);
   return 0;
   
}
