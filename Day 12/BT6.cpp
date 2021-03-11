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
void soSanhTrungBinhCong2Mang(int a[], int b[], int n, int m){
	float kq1=0, kq2=0, count1=0, count2=0;
	for(int i=0; i<n; i++){
		count1++;
		kq1 += a[i];
	}
	kq1 = kq1/count1;
	for(int i=0; i<m; i++){
		count2++;
		kq2 += b[i];
	}
	kq2 = kq2/count2;
	if(kq1>kq2){
		printf("\nMang 1 co trung binh cong lon hon mang 2");
	}
	else if(kq1<kq2){
		printf("\nMang 2 co trung binh cong lon hon mang 1");
	}
	else{
		printf("\nHai mang co trung binh cong bang nhau");
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
	for(int i=0; i<k; i++){
		printf("\nc[%d] = %d",i,c[i]);
	}

}
