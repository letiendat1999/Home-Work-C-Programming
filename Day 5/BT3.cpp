#include<stdio.h>
#include<conio.h>
int soSanhLonNhat(int a, int b, int c);
int soSanhNhoNhat(int a, int b, int c);
main(){
	int x,y,z;
	printf("Moi nhap so thu nhat: ");	scanf("%d", &x);
	printf("\nMoi nhap so thu hai: ");	scanf("%d", &y);
	printf("\nMoi nhap so thu ba: ");	scanf("%d", &z);
	printf("\nGia tri lon nhat trong ba so la %d", soSanhLonNhat(x,y,z));
	printf("\nGia tri nho nhat trong ba so la %d", soSanhNhoNhat(x,y,z));
}
int soSanhLonNhat(int a, int b, int c){
	int max;
	if(a>b){
		if(a>c){
			max = a;
		
		}
		else{		//a<c
			max = c;
		
		}
	}
	else{	//a<b
		if(b>c){
			max = b;
			
		}
		else{	//b<c
			max = c;
		
		}
	}
	return max;
}
int soSanhNhoNhat(int a, int b, int c){
	int min;
	if(a<b){
		if(a<c){
			min = a;
		
		}
		else{		//a>c
			min = c;
		
		}
	}
	else{	//a>b
		if(b<c){
			min = b;
			
		}
		else{	//b>c
			min = c;
		
		}
	}
	return min;
}
