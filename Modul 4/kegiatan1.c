#include <stdio.h>

int main() {
    int transaksi, total = 0 , ulang; //

    printf("===Pencatatan Transaksi===\n");

    do {
         printf("Masukkan transaksi selanjutnya (gunakan 0 untuk menyelesaikan): \n");
        
        do {
        scanf("\n%d", &transaksi);   // memasukkan input dari user

        if (transaksi > 0) {   // transaksi harus diatas 0
            total += transaksi; // menambahkan transaksi ke total
        }
        } while (transaksi != 0);//transaksi di stop jika user menginputkan 0

    printf("Total dari transaksi tersebut adalah: %d\n\n\n", total); 

    printf("Apakah anda ingin mencatat transaksi lagi? (1 = Ya , 0 = Tidak)"); //meminta user untuk melanjutkan atau tidak transaksi
    scanf("%d",&ulang);

    total = 0 ;
    } while (ulang == 1);// ketika user meinputkan 1 maka akan dilanjutkan transaksi kembali
    printf("Terima Kasih!"); //ketika user meinputkan 0 maka akan di print terimakasih
    
}