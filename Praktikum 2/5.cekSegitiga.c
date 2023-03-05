/*
Nama Program  : cekSegitiga.c
Deskripsi     : Mengecek ketiga sisi berupa interger dan merepresentasikan apakah ketiga sisi tersebut membentuk segitiga sama kaki, segitiga sama sisi, segitiga sembarang, atau terdapat nilai yang bukan sisi segitiga.
Nama Pembuat  : Muhammad Daffa Aradhana Adriansyah
NIM           : 24060122120022
Tanggal       : 4 Maret 2023 18.14 WIB
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Kamus Lokal
    int sisia;
    int sisib;
    int sisic;

    // Algoritma
    printf("Masukkan nilai sisi a: ");
    scanf("%d", &sisia);

    printf("Masukkan nilai sisi b: ");
    scanf("%d", &sisib);

    printf("Masukkan nilai sisi c: ");
    scanf("%d", &sisic);

    if (sisia <= 0 || sisib <= 0 || sisic <= 0) {
        printf("Terdapat nilai yang bukan sisi segitiga");
    } else {
        if (sisia == sisib && sisib == sisic) {
            printf("Segitiga Sama Sisi");
        } else if (sisia == sisib || sisia == sisic || sisib == sisic) {
            printf("Segitiga Sama Kaki");
        } else {
            printf("Segitiga Sembarang");
        }
    }

    return 0;
}
