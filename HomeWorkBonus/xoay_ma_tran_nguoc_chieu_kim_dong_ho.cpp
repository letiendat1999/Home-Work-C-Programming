#include<stdio.h>
#include<conio.h>
#define MAX 50
void nhap(int n, int m, int a[MAX][MAX])
{
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void xuat(int n, int m, int a[MAX][MAX])
{
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}
void xoayMaTran90(int n, int m, int a[MAX][MAX])
{
	int i,j,b[MAX][MAX];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			b[m-j-1][i]=a[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%5d",b[i][j]);
		}
		printf("\n");
	}
}
void xoayMaTran180(int n, int m, int a[MAX][MAX])
{
	int i,j,b[MAX][MAX],c[MAX][MAX];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			b[m-j-1][i]=a[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			c[m-j-1][i]=b[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%5d",c[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int n,m,k,a[MAX][MAX];
	do{
		printf("nhap n: ");
		scanf("%d",&n);
	}
	while(n<0 || n>50);
	do{
		printf("\nnhap m: ");
		scanf("%d",&m);
	}
	while(m<0 || m>50);
	do{
		printf("\nNhap k: ");
		scanf("%d",&k);
		
	}
	while(k!=0 && k!= 1 && k!=2);
	printf("\nNhap ma tran:\n");
	nhap(n,m,a);
	printf("\nXuat ma tran:\n");
	xuat(n,m,a);
	printf("\nMa tran xoay la:\n");
	if(k==1){
		xoayMaTran90(n,m,a);
		
	}
	else if(k==2){
		xoayMaTran180(n,m,a);
	}
	else{
		printf("\nThoat chuong trinh");
	}
	return 0;
	
}
