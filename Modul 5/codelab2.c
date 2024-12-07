#include <stdio.h>

int main() {
  // Deklarasi array 2D untuk menyimpan jumlah produk yang terjual di setiap toko
  int penjualan[2][3];
  int i,j;

  // Input jumlah produk yang terjual di setiap toko
  printf("Masukkan jumlah produk yang terjual di Toko 1 (A, B, C): ");
  scanf("%d %d %d", &penjualan[0][0], &penjualan[0][1], &penjualan[0][2]);

  printf("Masukkan jumlah produk yang terjual di Toko 2 (A, B, C): ");
  scanf("%d %d %d", &penjualan[1][0], &penjualan[1][1], &penjualan[1][2]);

  // Hitung total penjualan untuk setiap produk
  int total_penjualan[3] = {0};
  for (i = 0; i < 2; i++) {
    for ( j = 0; j < 3; j++) {
      total_penjualan[j] += penjualan[i][j];
    }
  }

  // Tampilkan hasil total penjualan dari kedua toko
  printf("\nTotal penjualan untuk setiap produk:\n");
  printf("Produk A: %d\n", total_penjualan[0]);
  printf("Produk B: %d\n", total_penjualan[1]);
  printf("Produk C: %d\n", total_penjualan[2]);

  return 0;
}