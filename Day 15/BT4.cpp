// tinh tong 2 ma tran co cung kich thuoc
#include<stdio.h>
#define MAX 100

int main()
{
	//khai bao bien
	int a1[MAX][MAX], a2[MAX][MAX], a3[MAX][MAX];
	int hang1, cot1, hang2, cot2;
	//nhap so hang, so cot cho 2 ma tran
	do{
		printf("Nhap so hang ma tran 1: ");
		scanf("%d",&hang1);
		
	}while(hang1<=0);
	
	do{
		printf("\nNhap so cot ma tran 1: ");
		scanf("%d",&cot1);
		
	}while(cot1<=0);
	
	do{
		printf("\nNhap so hang ma tran 2: ");
		scanf("%d",&hang2);
		
	}while(hang2<=0 || hang2!=hang1);
	
	do{
		printf("\nNhap so cot ma tran 2: ");
		scanf("%d",&cot2);
		
	}while(cot2<=0 || cot2!=cot1);

	//nhap gia tri cho ma tran
	printf("\nNhap ma tran 1: \n");
	for(int i=0; i<hang1; i++){
		for(int j=0; j<cot1; j++){
			printf("\na1[%d][%d] = ",i,j);
			scanf("%d",&a1[i][j]);
		}
	}
	printf("\nNhap ma tran 2: \n");
	for(int i=0; i<hang2; i++){
		for(int j=0; j<cot2; j++){
			printf("\na2[%d][%d] = ",i,j);
			scanf("%d",&a2[i][j]);
		}
	}
	
	//xuat ma tran
	printf("\nMa tran 1 la: \n");
	for(int i=0; i<hang1; i++){
		for(int j=0; j<cot1; j++){
			printf("%d ",a1[i][j]);
		}
		printf("\n");
	}
	printf("\nMa tran 2 la: \n");
	for(int i=0; i<hang2; i++){
		for(int j=0; j<cot2; j++){
			printf("%d ",a2[i][j]);
		}
		printf("\n");
	}
	//tinh tong 2 ma tran
	printf("\nTong 2 ma tran la: \n");
	
	for(int i=0; i<hang2; i++){
		for(int j=0; j<cot2; j++){
			a3[i][j] = a1[i][j] + a2[i][j];
		}
	}
	
	for(int i=0; i<hang2; i++){
		for(int j=0; j<cot2; j++){
			printf("%d ",a3[i][j]);
		}
		printf("\n");
	}
	return 1;	
}
