//Tinh tong duong cheo chinh cua ma tran
#include<stdio.h>
#define MAX 100
void nhapMaTran(int hang, int cot, int a[MAX][MAX]){
	//nhap gia tri cho ma tran
	for(int i=0; i<hang; i++){
		for(int j=0; j<cot; j++){
			printf("\na1[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
int xuatMaTran(int hang, int cot, int a[MAX][MAX]){
	//xuat ma tran
	printf("\nMa tran vua nhap la: \n");
	for(int i=0; i<hang; i++){
		for(int j=0; j<cot; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int tinhTongDuongCheo(int hang, int cot, int a[MAX][MAX]){
	int sum = 0;
	for(int i=0; i<hang; i++){
		for(int j=0; j<cot; j++){
			if(i==j){
				sum += a[i][j];
			}
		}
	}
	printf("\nTong duong cheo chinh la: %d",sum);
}
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
	nhapMaTran(hang,cot,a);
	xuatMaTran(hang,cot,a);
	tinhTongDuongCheo(hang,cot,a);
	return 1;
}
