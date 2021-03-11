/*
De bai:
Viet chuong trình nhap 1 so nguyên n (50<=n<=100), kiem tra có bao nhiêu so chan tu 1 toi n, in ra các so chan do
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
