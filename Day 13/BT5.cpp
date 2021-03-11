#include<stdio.h>
#define MAX 100
void nhapMang1(int a[], int n);
void xuatMang1(int a[], int n);
void nhapMang2(int b[], int m);
void xuatMang2(int b[], int m);
int tronHaiMang(int a[], int b[], int n, int m);
int main(){
	int n,m,a[MAX],b[MAX];
	do{
		printf("Nhap n = ");	//Nhap so phan tu cua mang 1
		scanf("%d",&n);
	}while(n<=0);
	
	do{
		printf("\nNhap m = ");	//Nhap so phan tu cua mang 2
		scanf("%d",&m);
	}while(m<=0);
	
	printf("\nNhap mang 1:");	//nhap gia tri cho mang 1
	nhapMang1(a,n);
	printf("\nNhap mang 2:");	//nhap gia tri cho mang 2
	nhapMang2(b,m);
	tronHaiMang(a,b,n,m);
	return 0;
}
void nhapMang1(int a[], int n){
	for(int i=0; i<n; i++){
		printf("\na[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
void xuatMang1(int a[], int n){
	for(int i=0; i<n; i++){
		printf("\na[%d] = %d",i,a[i]);
	}
}
void nhapMang2(int b[], int m){
	for(int i=0; i<m; i++){
		printf("\nb[%d] = ",i);
		scanf("%d",&b[i]);
	}
}
void xuatMang2(int b[], int m){
	for(int i=0; i<m; i++){
		printf("\nb[%d] = %d",i,b[i]);
	}
}

int tronHaiMang(int a[], int b[], int n, int m){	
	int k,j=0,c[MAX];			//j la bien vi tri cua mang 3 (mang can tron)
	k = m+n;					//k la so phan tu cua mang sau khi tron lai
	for(int i=0; i<n;i++){		//chay tu dau den cuoi mang 1
		c[j] = a[i];			//gan tung phan tu cua mang 1 cho mang 3 (mang can tron)
		j++;			//tang j de j chay tu 0 den (n-1)
	}
	//j = (n-1) nen khi tron them mang 2 ta can cho j chay tu n
	for(int i=0; i<m; i++){		//chay tu dau den cuoi mang 2
		c[j] = b[i];			//gan tung phan tu cua mang 2 cho mang 3
		j++;			//tang j de j chay tu n den n+(m-1)
	}
	printf("\nMang sau khi tron la: ");		//in ra mang 3 sau khi tron mang 1 va mang 2
	//tron 2 mang 
	for(int i=0; i<k; i++){		//k=n+m
		printf("%d ",c[i]);
	}

}
