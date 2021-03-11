#include<stdio.h>
#include<conio.h>

int kiemTraSoNguyenTo(int a);
int main(){
	float n, max = 1;
	printf("Nhap n: ");
	do{
		scanf("%f", &n);
	}while(n >= 3000 || n <= 0);
	for(int i=1; i<=n; i++){
		if(kiemTraSoNguyenTo(i)==1){
			if(i>max){
				max = i;
			}
		}
	}
	printf("\nSo nguyen to lon nhat la: %.2f",max);
	return 0;
}
int kiemTraSoNguyenTo(int a)
{
	int dem=0;
	for(int k=1;k<=a;k++)
		if(a%k==0)
			dem++;
		if(dem==2)
			return 1;
		return 0;
}
