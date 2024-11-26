#include <stdio.h>

 int main()
 {
   //input
   int jari_jari_lingkaran;
   const double phi = 3.14159;


   
  //input by user
   printf("\nmasukkan jari jari lingkaran = ");
   scanf("%d", &jari_jari_lingkaran);
   //proses
   double luas_lingkaran = phi*jari_jari_lingkaran*jari_jari_lingkaran;
   double  keliling_lingkaran = 2*phi*jari_jari_lingkaran;
  //output
   printf("luas lingkaran = %.2lf\n",luas_lingkaran);
   printf("keliling lingkaran = %.2lf\n ",keliling_lingkaran);
    

  //A || B


 }
