#include <stdio.h>
#include <string.h>

int main(){

    char password[] = "rahasia";
    char input [10];

    do {
        printf("masukkan kode = ");
        scanf("%s",&input);
    } while (strcmp(input, password) );
    printf("akses ternilai!\n");
}