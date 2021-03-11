#include<stdio.h>
#include<conio.h>
#define MAX 100
int kiemTraSoChinhPhuong(int a);
int main()
{	
	int n,a[MAX][MAX],max=0,vtd,vtc;
	do{
		printf("Nhap so nguyen duong n: ");
		scanf("%d",&n);
	}
	while(n<0 || n>1000);
	printf("\nNhap vao cac phan tu cho mang: ");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("\n%d",&a[i][j]);
		}
		
	}
	printf("\nCac phan tu trong mang la:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d   ",a[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(kiemTraSoChinhPhuong(a[i][j])==1){
				if(max<a[i][j]){
					max=a[i][j];
					 vtd=i;
					 vtc=j;
				}
			}
		}
	}
				if(max!=0)
					printf("\nSo chinh phuong lon nhat la %d tai dong %d cot %d",max,vtd,vtc);
				else
					printf("\nKhong co so chinh phuong");
			
		
	
	int t=0;
	for(int i=0;i<n;i++){
		int m=0;
		for(int j=0;j<n;j++){
			if(kiemTraSoChinhPhuong(a[i][j])==1 && m<a[i][j]){
				m=a[i][j];
				t+=m;
			}
				
		}
	}
	printf("\nTong cac so chinh phuong lon nhat tren moi cot cua a la: %d ",t);
	return 0;
		
}
int kiemTraSoChinhPhuong(int a)
{
	for(int i=0;i<a;i++){
		if(i*i==a)
			return 1;
		
	}
	return 0;
}
	
	

