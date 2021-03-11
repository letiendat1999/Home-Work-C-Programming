/* Lat ma tran 90 do */

#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k,dong=4,cot=4;
int a[10][10]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
int kq[10][10];

/*
printf("nhap so dong, so cot:");
scanf("%d%d",&dong,&cot);

//Nhap mang a:
for(i=0;i<cot;i++)
    for(j=0;j<cot;j++)
    {
    printf("a[%d,%d]:",i+1,j+1);
    scanf("%d",&a[i][j]);
    }

*/

//Lat ma tran:
for(i=0;i<cot;i++)
    {k=dong-1;
    for(j=0;j<dong;j++)
        {
        kq[i][j]=a[k][i];
        k--;
        }
    }

//Xuat ma tran:
for(i=0;i<cot;i++)
    {
    for(j=0;j<dong;j++)
        printf("%3d",kq[i][j]);
    printf("\n");
    }
getch();
return 0;
}
//3:59 PM 4/21/2010  
