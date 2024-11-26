#include <stdio.h>

int main()
{
    printf("---Program Penghitung Nilai Akhir Mahasiswa---\n");
    
    char nama [50];
    long long int NIM;
    float Nilai_Tugas;
    float Nilai_UTS;
    float Nilai_UAS;
    float Nilai_akhir;
   
    printf("Masukkan Nama Mahasiswa = ");
    gets(nama);
   
    printf("Masukkan NIM mahasiswa = ");
    scanf("%lld",&NIM);
   
    printf("Masukkan Nilai Tugas (0 - 100) = ");
    scanf("%f",&Nilai_Tugas);

    printf("Masukkan Nilai UTS (0 - 100) = ");
    scanf("%f",&Nilai_UTS);

    printf("Masukkan Nilai UAS (0-100) = ");
    scanf("%f",&Nilai_UAS);
                     
    printf("\n\n--------------------------------------------------------------");

    printf("\n\n\nNama Mahasiswa = %s",nama);

    printf("\nMasukkan NIM mahasiswa = %lld",NIM);

    printf("\nMasukkan Nilai Tugas = %.2f",Nilai_Tugas);

    printf("\nMasukkan Nilai UTS = %.2f",Nilai_UTS);

    printf("\nMasukkan Nilai UAS = %.2f",Nilai_UTS);

    float Nilai_Akhir =  Nilai_Tugas * 20 / 100 + Nilai_UTS * 35 / 100 + Nilai_UAS * 45 / 100;

    printf("\nMasukkan Nilai Akhir = %.2f\n",Nilai_Akhir);

    printf("\n\n\n\n\n\n\n------------------------------------ ");










  






    
    


    

    



    
}