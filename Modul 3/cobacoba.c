#include <stdio.h>

int main() {
    int film, jenis_tiket;
    int harga_film[] = {50000, 55000, 60000, 70000, 45000};
    int harga_tiket[] = {30000, 100000, 150000};

    // Menampilkan daftar film
    printf("==== Bioskop ====\n");
    printf("Film:\n");
    printf("1. Spiderman - Rp.%d\n", harga_film[0]);
    printf("2. Batman - Rp.%d\n", harga_film[1]);
    printf("3. Superman - Rp.%d\n", harga_film[2]);
    printf("4. Avengers - Rp.%d\n", harga_film[3]);
    printf("5. Joker - Rp.%d\n", harga_film[4]);

    // Memilih film
    do {
        printf("Pilih film (1-5): ");
        scanf("%d", &film);
    } while (film < 1 || film > 5);

    printf("Harga tiket %s = Rp.%d\n", 
    (film == 1 ? "Spiderman" :
    film == 2 ? "Batman" :
    film == 3 ? "Superman" :
    film == 4 ? "Avengers" : "Joker"), 
    harga_film[film - 1]);

    // Menampilkan jenis tiket
    printf("Jenis tiket:\n");
    printf("1. Reguler - Rp.%d\n", harga_tiket[0]);
    printf("2. VIP - Rp.%d\n", harga_tiket[1]);
    printf("3. VVIP - Rp.%d\n", harga_tiket[2]);

    // Memilih jenis tiket
    do {
        printf("Pilih jenis tiket (1-3): ");
        scanf("%d", &jenis_tiket);
    } while (jenis_tiket < 1 || jenis_tiket > 3);

    printf("Harga tiket jenis %s = Rp.%d\n", 
           (jenis_tiket == 1 ? "Reguler" : 
            jenis_tiket == 2 ? "VIP" : "VVIP"), 
           harga_tiket[jenis_tiket - 1]);

    return 0;
}
