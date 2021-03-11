#include<stdio.h>
#include<conio.h>
int timSoDao(int a);
double giaiThua(int a);
int kiemTraSoNguyenTo(int a);
int soChinhPhuong(int a);

int main()
{
	int x,y,z;
	do{
		printf("Nhap x: ");
		scanf("%d",&x);
		
	}
	while(x<=0 || x>=1000);
	do{
		printf("\nNhap y: ");
		scanf("%d",&y);
		
	}
	while(y<=x || y>=1000);
	do{
		printf("\nNhap z: ");
		scanf("%d",&z);
		
	}
	
	while(z<=y || z>=1000);
	int flag=0;
	for(int i=y-1;i>=x;i--){
		if(kiemTraSoNguyenTo(i)==1){
		
			printf("\nSo nguyen to a la: %d ",i);
			printf("\nGiai thua cua %d la %.1lf ",i,giaiThua(i));
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("\nKhong co so nguyen to a");
		
		int flag1=0;
	for(int i=y+1;i<=z;i++){
		if(kiemTraSoNguyenTo(i)==1){
		
			printf("\nSo nguyen to b la: %d ",i);
			printf("\nGiai thua cua %d la %.1lf ",i,giaiThua(i));
			flag1=1;
			break;
		}
	}
	
	if(flag1==0)
		printf("\nKhong co so nguyen to b");
	for(int i=x;i<=z;i++){
		if(timSoDao(i)-i==0)
			printf("\nSo doi xung la %d",i);
	} 
	for(int i=x;i<=z;i++){
		if(soChinhPhuong(i)==1){
			printf("\nSo chinh phuong la: %d",i);
		}
	}
	getch();
	return 1;
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
double giaiThua(int a)
{
	float t=1;
	for(int i=1;i<=a;i++)
		t*=i;
	return t;
	
}
int timSoDao(int a)
{
	int phanDu,soDao=0;
	while(a!=0){
		phanDu=a%10;
		soDao=soDao*10+phanDu;
		a/=10;
		
	};
	return soDao;
}
int soChinhPhuong(int a)
{
	int k;
	for(k=0;k<a;k++){
		if(k*k==a){
			return 1;
		}
		
	}
		return 0;
}
