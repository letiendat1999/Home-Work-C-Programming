#include<stdio.h>
#define MAX 100
void nhapMang1(int a[], int n);
void xuatMang1(int a[], int n);
void nhapMang2(int b[], int m);
void xuatMang2(int b[], int m);
int tronHaiMangVaTangDan(int a[], int b[], int n, int m);
int main(){
	int n,m,a[MAX],b[MAX];
	do{
		printf("Nhap n = ");
		scanf("%d",&n);
	}while(n<=0);
	
	do{
		printf("\nNhap m = ");
		scanf("%d",&m);
	}while(m<=0 && m!=n);
	
	printf("\nNhap mang chan:");
	nhapMang1(a,n);
	printf("\nNhap mang le:");
	nhapMang2(b,m);
	tronHaiMangVaTangDan(a,b,n,m);
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

int tronHaiMangVaTangDan(int a[], int b[], int n, int m){
	int k,j=0,c[MAX],temp;
	k = m+n;
	for(int i=0; i<n;i++){
		c[j] = a[i];
		j++;
	}
	for(int i=0; i<m; i++){
		c[j] = b[i];
		j++;
	}

	//sap xep theo thu tu tang dan
	for(int i=0; i<k-1; i++){
		for(int j=i+1; j<k; j++){
			if(c[i]>c[j]){
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}
	printf("\nMang sau khi xu ly: ");
	for(int i=0; i<k; i++){
		printf("%d ",c[i]);
	}

}
