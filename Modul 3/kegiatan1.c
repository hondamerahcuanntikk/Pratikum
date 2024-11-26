#include <stdio.h>

enum film{
    Spiderman = 50000,
    Batman = 55000,
    Superman = 60000,
    Avegers = 70000,
    Joker = 45000
};

enum jenistiket{
   reguler = 30000,
   vip = 100000,
   vvip = 150000
};
int main(){

    int film;
    int jenis_tiket;
    int pembayaran;
    char member;


    printf("====Bioskop===\n");
    printf("Film:\n");
    printf("1. Spiderman - Rp.50000\n");
    printf("2. Batman - Rp.55000\n");
    printf("3. Superman - Rp.60000\n");
    printf("4. Avengers - Rp.70000\n");
    printf("5. Joker - Rp.45000\n");
    printf("Pilih film (1-5) : ");
    scanf("%d",&film);

    if(film == 1){
        printf("harga tiket spiderman = 50000\n",Spiderman);
    }
    else if(film == 2){
        printf("harga tiket batman = 55000 \n",Batman); 
    }
    else if (film == 3){
        printf("harga tiket superman = 60000\n",Superman);
    }
    else if (film == 4){
        printf("harga tiket avegers = 700000 \n",Avegers);
    }
    else if(film == 5){
        printf("harga tiket joker = 45000 \n",Joker);
    }
    else {
        printf("input tidak valid input angka (1-5)");
    }

    printf("Jenis tiket: \n");
    printf("1. Reguler - Rp.30000\n");
    printf("2. VIP - Rp.100000\n");
    printf("3. VVIP - Rp.150000\n");
    printf("Pilih jenis tiket (1-3) : ");
    scanf("%d",&jenis_tiket);

    if(jenis_tiket == 1){
        printf("harga tiket jenis reguler = Rp.30000\n",reguler);
    }
    else if(jenis_tiket == 2){
        printf("harga tiket jenis VIP = Rp.100000\n",vip);
    }
    else if(jenis_tiket == 3){
        printf("harga tiket jenis VVIP = Rp.150000\n",vvip);
    }
    else{
        printf("input tidak valid input angka (1-3)\n");
    } 
    
   printf("\nApakah anda adakah member? (Y/N) : ");
   scanf(" %c",&member);

    if (member == 'Y'|| member == 'y'){
        if(film == 1){
            if (jenis_tiket == 1){
                double M_spiderman = Spiderman + reguler;
                double member_spiderman = M_spiderman - M_spiderman * 0.1;

                printf("total harga : Rp%.2lf\n",member_spiderman);
                printf("Alamat memori variabel total : %p\n",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if(pembayaran > member_spiderman){
                    printf("kembalian uang anda : Rp%.2f",kembalian);
                } else if (pembayaran == member_spiderman) {
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }

            } else if(jenis_tiket == 2){
                double M_spiderman = Spiderman + vip;
                double member_spiderman = M_spiderman - M_spiderman * 0.1;

                printf("total harga : Rp.%2.f\n",member_spiderman);
                printf("Alamat memori variabel total : %p\n",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf(" %d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : Rp.%.2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }
            } else if(jenis_tiket == 3){
                double M_spiderman = Spiderman + vvip;
                double member_spiderman = M_spiderman - M_spiderman * 0.1;

                printf("total harga : Rp.%2.f\n",member_spiderman);
                printf("Alamat memori variabel total : %p\n",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf(" %d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : Rp.%.2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }
            }
        } else if (film == 2){
            if (jenis_tiket == 1){
                double M_spiderman = Spiderman + reguler;
                double member_spiderman = M_spiderman - M_spiderman * 0.1;

                printf("total harga : Rp.%.2f\n",member_spiderman);
                printf("Alamat memori variabel total : %p\n",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if(pembayaran > member_spiderman){
                    printf("kembalian uang anda : Rp%.2f",kembalian);
                } else if (pembayaran == member_spiderman) {
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }

            } else if(jenis_tiket == 2){
                double M_spiderman = Spiderman + vip;
                double member_spiderman = M_spiderman - M_spiderman * 0.1;

                printf("total harga : Rp.%2.f\n",member_spiderman);
                printf("Alamat memori variabel total : %p\n",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : Rp.%.2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }
            } else if(jenis_tiket == 3){
                double M_spiderman = Spiderman + vvip;
                double member_spiderman = M_spiderman - M_spiderman * 0.1;

                printf("total harga : Rp.%2.f\n",member_spiderman);
                printf("Alamat memori variabel total : %p\n",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : Rp.%.2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }
            }
        } else if (film == 3){
            if (jenis_tiket == 1){
                    double M_spiderman = Spiderman + reguler;
                    double member_spiderman = M_spiderman - M_spiderman * 0.1;

                    printf("total harga : Rp.%.2f\n",member_spiderman);
                    printf("Alamat memori variabel total : %p\n",&member_spiderman);

                    printf("masukkan uang pembayaran : ");
                    scanf("%d",&pembayaran);

                    double kembalian = pembayaran - member_spiderman;
                    if(pembayaran > member_spiderman){
                        printf("kembalian uang anda : Rp%.2f",kembalian);
                    } else if (pembayaran == member_spiderman) {
                        printf("terima kasih");
                    } else {
                        printf("uang anda kurang");
                    }

            } else if(jenis_tiket == 2){
                    double M_spiderman = Spiderman + vip;
                    double member_spiderman = M_spiderman - M_spiderman * 0.1;

                    printf("total harga : Rp.%2.f\n",member_spiderman);
                    printf("Alamat memori variabel total : %p\n",&member_spiderman);

                    printf("masukkan uang pembayaran : ");
                    scanf("%d",&pembayaran);

                    double kembalian = pembayaran - member_spiderman;
                    if (pembayaran > member_spiderman){
                        printf("kembalian uang anda : Rp.%.2f",kembalian);
                    } else if (pembayaran == member_spiderman){
                        printf("terima kasih");
                    } else {
                        printf("uang anda kurang");
                    }
            } else if(jenis_tiket == 3){
                double M_spiderman = Spiderman + vvip;
                double member_spiderman = M_spiderman - M_spiderman * 0.1;

                printf("total harga : Rp.%2.f\n",member_spiderman);
                printf("Alamat memori variabel total : %p\n",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : Rp.%.2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }
            }
        } else if (film == 4) {
            if (jenis_tiket == 1){
                double M_spiderman = Spiderman + reguler;
                double member_spiderman = M_spiderman - M_spiderman * 0.1;

                printf("total harga : Rp.%.2f\n",member_spiderman);
                printf("Alamat memori variabel total : %p\n",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if(pembayaran > member_spiderman){
                    printf("kembalian uang anda : Rp%.2f",kembalian);
                } else if (pembayaran == member_spiderman) {
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }

            } else if(jenis_tiket == 2){
                double M_spiderman = Spiderman + vip;
                double member_spiderman = M_spiderman - M_spiderman * 0.1;

                printf("total harga : Rp.%2.f\n",member_spiderman);
                printf("Alamat memori variabel total : %p\n",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : Rp.%.2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                } 
            } else if(jenis_tiket == 3){
                double M_spiderman = Spiderman + vvip;
                double member_spiderman = M_spiderman - M_spiderman * 0.1;

                printf("total harga : Rp.%2.f\n",member_spiderman);
                printf("Alamat memori variabel total : %p\n",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : Rp.%.2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }
            } {
            
            }
        } else if (film == 5) {
            if (jenis_tiket == 1){
                double M_spiderman = Spiderman + reguler;
                double member_spiderman = M_spiderman - M_spiderman * 0.1;

                printf("total harga : Rp.%.2f\n",member_spiderman);
                printf("Alamat memori variabel total : %p\n",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if(pembayaran > member_spiderman){
                    printf("kembalian uang anda : Rp%.2f",kembalian);
                } else if (pembayaran == member_spiderman) {
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }

            } else if(jenis_tiket == 2){
                double M_spiderman = Spiderman + vip;
                double member_spiderman = M_spiderman - M_spiderman * 0.1;

                printf("total harga : Rp.%2.f\n",member_spiderman);
                printf("Alamat memori variabel total : %p\n",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : Rp.%.2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                } 
            } else if(jenis_tiket == 3){
                double M_spiderman = Spiderman + vvip;
                double member_spiderman = M_spiderman - M_spiderman * 0.1;

                printf("total harga : Rp.%2.f\n",member_spiderman);
                printf("Alamat memori variabel total : %p\n",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : Rp.%.2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }
            }         
        }        
    } else if (member == 'N' || member == 'n'){
        if (film == 1){
            if ( jenis_tiket == 1){
                double member_spiderman = Spiderman + reguler;

                printf("total harga : Rp.%2.f",member_spiderman);
                printf("\nalamat memori variabel total : %p",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : ,Rp.%2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }
            }else if ( jenis_tiket == 2){
                double member_spiderman = Spiderman + vip;

                printf("total harga : Rp.%2.f",member_spiderman);
                printf("\nalamat memori variabel total : %p",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : ,Rp.%2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }
            } else if ( jenis_tiket == 3){
                double member_spiderman = Spiderman + vvip;

                printf("total harga : Rp.%2.f",member_spiderman);
                printf("\nalamat memori variabel total : %p",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : ,Rp.%2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }
            } 
        }else if (film == 2){
            if ( jenis_tiket == 1){
                double member_spiderman = Spiderman + reguler;

                printf("total harga : Rp.%2.f",member_spiderman);
                printf("\nalamat memori variabel total : %p",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : ,Rp.%2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }   
            }else if ( jenis_tiket == 2){
                double member_spiderman = Spiderman + vip;

                printf("total harga : Rp.%2.f",member_spiderman);
                printf("\nalamat memori variabel total : %p",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : ,Rp.%2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }   
            }else if ( jenis_tiket == 3){
                double member_spiderman = Spiderman + vvip;

                printf("total harga : Rp.%2.f",member_spiderman);
                printf("\nalamat memori variabel total : %p",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : ,Rp.%2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }   
            }        
        }else if (film == 3){
            if ( jenis_tiket == 1){
                double member_spiderman = Spiderman + reguler;

                printf("total harga : Rp.%2.f",member_spiderman);
                printf("\nalamat memori variabel total : %p",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : ,Rp.%2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }   
            }else if ( jenis_tiket == 2){
                double member_spiderman = Spiderman + vip;

                printf("total harga : Rp.%2.f",member_spiderman);
                printf("\nalamat memori variabel total : %p",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : ,Rp.%2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }   
            }else if ( jenis_tiket == 3){
                double member_spiderman = Spiderman + vvip;

                printf("total harga : Rp.%2.f",member_spiderman);
                printf("\nalamat memori variabel total : %p",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : ,Rp.%2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }  
            }
        } else if (film == 4){
            if ( jenis_tiket == 1){
                double member_spiderman = Spiderman + reguler;

                printf("total harga : Rp.%2.f",member_spiderman);
                printf("\nalamat memori variabel total : %p",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : ,Rp.%2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }   
            }else if ( jenis_tiket == 2){
                double member_spiderman = Spiderman + vip;

                printf("total harga : Rp.%2.f",member_spiderman);
                printf("\nalamat memori variabel total : %p",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : ,Rp.%2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }   
            }else if ( jenis_tiket == 3){
                double member_spiderman = Spiderman + vvip;

                printf("total harga : Rp.%2.f",member_spiderman);
                printf("\nalamat memori variabel total : %p",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : ,Rp.%2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }    
            }
        }else if (film == 5){
            if ( jenis_tiket == 1){
                double member_spiderman = Spiderman + reguler;

                printf("total harga : Rp.%2.f",member_spiderman);
                printf("\nalamat memori variabel total : %p",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : ,Rp.%2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }   
            }else if ( jenis_tiket == 2){
                double member_spiderman = Spiderman + vip;

                printf("total harga : Rp.%2.f",member_spiderman);
                printf("\nalamat memori variabel total : %p",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : ,Rp.%2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                }   
            }else if ( jenis_tiket == 3){
                double member_spiderman = Spiderman + vvip;

                printf("total harga : Rp.%2.f",member_spiderman);
                printf("\nalamat memori variabel total : %p",&member_spiderman);

                printf("masukkan uang pembayaran : ");
                scanf("%d",&pembayaran);

                double kembalian = pembayaran - member_spiderman;
                if (pembayaran > member_spiderman){
                    printf("kembalian uang anda : ,Rp.%2f",kembalian);
                } else if (pembayaran == member_spiderman){
                    printf("terima kasih");
                } else {
                    printf("uang anda kurang");
                } 
            }
        }                  
    }
}   