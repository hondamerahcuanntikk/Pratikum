#include <stdio.h>

int main() {
    int angka;
    float rataRata , total = 0, jumlah = 0;

  

    // Loop untuk  menerima input sampai angka negatif dimasukkan
    while (angka >= 0) {
        
        printf("Masukkan bilangan bulat positif (masukkan angka negatif untuk berhenti): ");
        scanf("%d", &angka);

        // Jika angka negatif, keluar dari loop
        if (angka < 0) {
           break;
        }

        // Menambahkan angka ke total dan menghitung jumlah angka yang dimasukkan
        total = total + angka;
        jumlah++;
    }

    // Mengecek apakah ada angka yang dimasukkan untuk menghitung rata-rata
    if (jumlah > 0) {
        rataRata = total / jumlah;
        printf("Total Bilangan: %.0f\n", total);
        printf("Rata-rata bilangan: %.2f\n", rataRata);
    } else {
        printf("Tidak ada bilangan positif yang dimasukkan.\n");
    }

    return 0;
}
//while di cek terlebih dahulu baru di cek kondisi
//do while di exsekusi terlebih dahulu baru di cek kondisi
//nasted loop(looping bersarang) didalam loop ada loop
// codelab 2 menggunakan nasted loop(looping bersarang)