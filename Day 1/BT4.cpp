#include <conio.h>
#include <stdio.h>

int main()
{
	int a,b,c;
	/* int a;
	   int b;
	   int c;
	   cach khai bao nay ton bo nho hon */
	int max;
	printf("Nhap so thu nhat: ");	scanf("%d", &a);
	printf("\nNhap so thu hai: ");	scanf("%d", &b);
	printf("\nNhap so thu ba: ");	scanf("%d", &c);
	//Viet chuong trinh so sanh
	if(a>b){
		// max = a
		if(a>c){
			max = a;	// a chinh la so lon nhat, TH1
		}
		else{			// c>a
			max = c;	// c chinh la so lon nhat, TH2
		}
	}
	else{				//b>a
		//max = b
		if(b>c){
			max = b;	//TH3
			
		}
		else{			//c>b
			max = c;	//TH2
		}
	}
	printf("\nSo lon nhat la: %d",max);
	return 0;
	
}
