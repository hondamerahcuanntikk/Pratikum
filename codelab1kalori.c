//bissmilah// 
#include <stdio.h>
int main(){
     printf("=====Program penghitung kalori harian====");
     printf("\nProgram ini akan menghitung total kalori harian yang dikonsumsi");

    int kalorimakananpertama,kalorimakanankedua,kalorimakananketiga,total;
    
    const int total_kalori = 2000;

    

    printf("\nMasukkan kalori makanan pertama = ");
    scanf("%d",&kalorimakananpertama);

    printf("Masukkan kalori makanan kedua = ");
    scanf("%d",&kalorimakanankedua);

    printf("Masukkan kalori makanan ketiga = ");
    scanf("%d",&kalorimakananketiga);

    total = kalorimakananpertama + kalorimakanankedua + kalorimakananketiga;
    printf("totalkalori = %d", total_kalori);

    

    if (!( total > total_kalori ))
       {
     printf("\nkalori aman");
       } else {
        printf("\nkalori tidak aman");
       }


}