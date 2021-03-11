//chuong trinh nhap va xuat ma tran
#include<stdio.h>
#define MAX 100

int main()
{
	//khai bao bien
	int a[MAX][MAX];
	int hang, cot;
	//nhap so hang, so cot cho 2 ma tran
	do{
		printf("Nhap so hang ma tran a: ");
		scanf("%d",&hang);
		
	}while(hang<=0);
	
	do{
		printf("\nNhap so cot ma tran a: ");
		scanf("%d",&cot);
		
	}while(cot<=0);

	//nhap gia tri cho ma tran
	printf("\nNhap ma tran: \n");
	for(int i=0; i<hang; i++){
		for(int j=0; j<cot; j++){
			printf("\na1[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	//xuat ma tran
	printf("\nMa tran vua nhap la: \n");
	for(int i=0; i<hang; i++){
		for(int j=0; j<cot; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 1;	
}
