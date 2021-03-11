#include <stdio.h>
 
int main ()
{
   int n[ 10 ]; /* mang n gom 10 so nguyen */
   int i,j;
 
   /* khoi tao cac phan tu trong mang bat dau tu gia tri 0 */         
   for ( i = 0; i < 10; i++ )
   {
      n[ i ] = i + 100; /* Thiet lap phan tu tai vi tri i thanh i + 100 */
   }
   
   /* hien thi gia tri cac phan tu trong mang */
   for (j = 0; j < 10; j++ )
   {
      printf("Phan tu [%d] = %d\n", j, n[j] );
   } 
   return 0;
}

