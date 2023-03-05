/*
Nama Program  : bilInteger.c
Deskripsi     : Menampilkan jenis bilangan apakah bilangan tersebut merupakan bilangan bulat positif, negatif atau nol, jika bukan bilangan maka program akan menampilkan "Bukan termasuk bilangan"
Nama Pembuat  : Muhammad Daffa Aradhana Adriansyah
NIM           : 24060122120022
Tanggal       : 28 Februari 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Kamus Lokal
    int Bilangan;

    // Algoritma
    printf("Masukkan nilai input: ");
    if (scanf("%d", &Bilangan) == 1) {
        if (Bilangan > 0) {
            printf("Bilangan bulat positif");
        } else if (Bilangan == 0) {
            printf("Bilangan tersebut bernilai nol");
        } else {
            printf("Bilangan bulat negatif");
        }
    } else {
        printf("Bukan merupakan bilangan");
    }

    return 0;
}
