#include <stdio.h>

enum {
    economy = 200,
    business = 500,
    fristclass = 1000


    };
 int main(){
    int pilihan_tiket;


    printf("Pilih Kelas Tiket : \n");
    printf(" 1. economy \n");
    printf(" 2.business\n");
    printf(" 3.frist class\n");
    printf("Masukkan pilihan (1-3) : ");
    scanf("%d",&pilihan_tiket);
    

    if (pilihan_tiket == 1){
        printf("harga tiket kelas economy : $%d",economy);
    } else if (pilihan_tiket == 2){
        printf("harga tiket kelas bussiness : $%d",business);
    } else if (pilihan_tiket == 3){
        printf("harga tiket kelas frist class : $%d",fristclass);
    } else {
        printf("input tidak valid. input dalam rentang 1-3");
    }
 }