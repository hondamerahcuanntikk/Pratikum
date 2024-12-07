#include <stdio.h>
#include <string.h>

int main() {
    
    int i; 
    char produk[3][10] = {"Produk A", "Produk B", "Produk C"};//memasukkan nama produk kedalam tipe data char yang masing masing memiliki 3 elemem,yang masing"elemen dapat menyimpan 10 karakter
    int jumlah[3] = {8, 15, 15}; //memasukan variabel jumlah kedalam tipe data integer sepanjang 3 indeks

    
    printf("Total penjualan untuk setiap produk:\n");
    for ( i = 0; i < 3; i++) { // melakukan looping nama produk dan jumlah
        printf("Produk %s: %d\n", produk[i], jumlah[i]);
    }



    return 0;
}