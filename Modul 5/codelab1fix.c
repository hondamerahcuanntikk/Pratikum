#include <stdio.h>
#include <string.h>
int main(){
    int nilai [5] = {85,90,78,92, 88 }; // memasukan variabel nilai kedalam tipe data integer dengan panjang 5 indeks
    char  siswa [5][10] = {"alice","bob","charlie","david","eva"}; // memasukkan variabel nama siswa ke dalam tipe data char yg masing masing memiliki 5 elemen string,yang masing" elemen dapat menyimpan  10 karakter
    int i ; 
    printf("daftar  siswa dan nilai sebelum diubah:\n"); // menampilkan nama dan nilai siswa sebelum diubah
    for(i = 0; i < 5 ; i++){ // looping untuk nama siswa dan nilai
    printf("%s = %d\n",siswa[i],nilai[i]);
    }
  
    printf("daftar siswa dan nilai sebelum diubah:\n"); // menampilkan nama dan nilai siswa sesudah diubah
    nilai[3]= 95; //mengubah nilai siswa ke -4(indek ke 3)
    for(i = 0 ; i < 5 ; i++) //looping untuk nama siswa dan nilai
    printf("%s = %d\n", siswa[i],nilai[i]);
    
}  
   