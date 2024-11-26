#include <stdio.h>
int main()
{
   int a , b ;
   printf("masukkan dua angka : ");
   scanf("%d %d",&a,&b);

   int sum = a + b;
   printf ("penjumlahan : %d\n ",sum);

   int difference = a - b;
   printf ("pengurangan : %d\n",difference);

   int product = a * b;
   printf("perkalian: %d\n",product);

   if (b !=0){
         float division = a / b;
         printf("pembagian: %.2f\n",division);
   } else {
    printf("error: pembagian dengan nol\n");
   }
   

}
