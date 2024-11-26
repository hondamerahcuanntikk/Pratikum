#include <stdio.h>

int main(){
    int skor;
    char nilai_huruf;

    printf("Masukkan skor anda (0-100) :");
    scanf("%d",&skor);

    if (skor >= 90)
        nilai_huruf ='A';
    else if (skor >= 80)
        nilai_huruf = 'B';
    else if (skor >= 70)
        nilai_huruf = 'C';
    else if (skor >= 60)
        nilai_huruf ='D';
    else 
        nilai_huruf = 'F';

    printf("Nilai huruf anda adalah: %c\n",nilai_huruf); 
}