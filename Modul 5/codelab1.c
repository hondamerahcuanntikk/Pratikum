//mencoba modul 5
#include <stdio.h>

// int main(){
//     int angka[5] = {1, 2, 3, 4, 5};
//     int i;

//     for( i= 0; i < 5; i++){
//         printf("Elemen ke -%d : %d\n" , i , angka[i]);


//     }
// }

int x [3][5];
int i;
int j;

for (i = 0 ; i < 3 ; i++){
    for(j = 0 ; i < 4 ;i++){
        x[i][j] = i + j;
    }
}