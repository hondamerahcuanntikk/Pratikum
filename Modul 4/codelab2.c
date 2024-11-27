#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;
    int j;
    int panjang;

    printf("Masukkan sebuah string: "); //memasukkan inputan string dari user
    fgets(str, sizeof(str), stdin);

    panjang = strlen(str); // menghapus newline dari inputan stirng
    if (str[panjang - 1] == '\n' ){
        str[panjang - 1] = '\0';
    }
    
    
    for (i = 0; i < panjang; i++){ // print karakter unik dalam stirngnya

      int karakterunik = 1; // melewati jika karakter sudah ada sebelumnya

        for (j = 0; j < i; j++){ // mencek apakah karakter string i sudah muncul sebelumnya
            if (  str[i] == str[j]) {
                karakterunik = 0;
                break;
            }
        }
    
        if(karakterunik){ // jika karakter unik dicetak dan dilanjutkan
            printf("%c", str[i]);
        }
    }
     printf("\n");
    

}

