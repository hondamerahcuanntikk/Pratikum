#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main() {
// Boolean values
bool flagTrue = true; // boolean di ubah menjadi bool karena sesuai dengan syntax yg terdapat dimodul 2
bool flagFalse = false; //boelean di ubah menjadi bool karena sesuai dengan syntax yg terdapat dimodul 2 

printf("Bool values demonstration:\n");
printf("flagTrue: %d\n",true ); //setelah koma ditambahkan true agar dapat memanggil variabel true (1)
printf("flagFalse: %d\n",false ); //setelah koma ditambahkan false agar dapat memanggil variabel false (0)

// String operations
char greeting[] = "Hello, World!";
char copyGreeting[20]; 
strcpy(copyGreeting, greeting);
printf("\nString operations:\n");
printf("Original greeting: %s\n", greeting); //string 1 diubah menjadi greeting karena untuk mangcopy greeting yaitu hello world
printf("Copied greeting: %s\n", copyGreeting); //string 2 diubah menjadi copygreeting karena untuk membatasi karakter greeting 1 yaitu hello world 

// Pointer demonstrations
int number = 100;
int *pointer = &number;
printf("\nPointer demonstrations:\n"); 
printf("Value of number: %d\n",number );//setelah koma ditambah number agar mengluarkan output yang ada pada variabel number 
printf("Address of number: %p\n", &number);
printf("Value of pointer: %p\n", pointer);
printf("Value pointed by pointer: %d\n",*pointer);//setelah koma ditambahkan *pointer agar membaca nilai yang ada pada alamat pointer tersebut
}