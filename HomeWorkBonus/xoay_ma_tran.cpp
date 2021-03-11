#include<stdio.h>
#include<conio.h>
int main(){
	int n=3,m=3,i,j,k;
	int a[10][10]={{1,2,3},{4,5,6},{7,8,9}};
	int kq[10][10];
	/*nhap vao so dong so cot*/
//	printf("nhap vao so dong va so cot: ");
//	scanf("%d %d",&n,&m); 
	/*nhap cac phan tu trong ma tran*/
//	printf("\nnhap vao cac phan tu: ");
//	for(i=0;i<n;i++){
//		for(j=0;j<m;j++){
//			scanf("%d ",&a[i][j]);
//		}
	
//	} */
	/* lat mang 90 do */
	for(i=0;i<m;i++){
		k=n-1;
		for(j=0;j<n;j++){
			kq[i][j]=a[k][i];
			k--;
		}
	}
	/* in ma tran vua xoay ra */
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%3d ",kq[i][j]);
		}
		printf("\n");
	}
	return 0;
}

