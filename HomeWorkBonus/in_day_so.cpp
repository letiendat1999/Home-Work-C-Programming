#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,a[50],max,s;
	printf("Moi ban nhap so phan tu day: ");
	scanf("%d",&n);
	printf("\nMoi ban nhap cac phan tu cho day: \n");
	for(i=0;i<n;i++){
		scanf(" %5d",&a[i]);
	}
	printf("\nday vua nhap la: ");
	for(i=0;i<n;i++){
		printf("%5d",a[i]);
	}
/* In ra so lon nhat va so lan xuat hien cua no trong day */
	max=a[0];
	for(i=1;i<n;i++){
		if(max<a[i])
			max=a[i];
	}
	s=0;
	for(i=0;i<n;i++){
		if(max==a[i])
			s++;
	}
printf("\ngia tri lon nhat trong day la %d va so lan xuat hien cua no la %d",max,s);
}
