/*
Nama Program  : hitungTahanan.c
Deskripsi     : Menghitung dan menampilkan jumlah total dari ketiga tahanan yang masing - masing nilainya tidak boleh negatif.
Nama Pembuat  : Muhammad Daffa Aradhana Adriansyah
NIM           : 24060122120022
Tanggal       : 4 Maret 2023 17.59 WIB
*/
#include <stdio.h>

#include <stdlib.h>

int main(void) {
    int tahanan1;
    int tahanan2;
    int tahanan3;
    int total;


    printf("Masukkan nilai tahanan 1 : ");
    scanf("%d", &tahanan1);

    printf("Masukkan nilai tahanan 2 : ");
    scanf("%d", &tahanan2);

    printf("Masukkan nilai tahanan 3 : ");
    scanf("%d", &tahanan3);

    if (tahanan1 <= 0 || tahanan2 <= 0 || tahanan3 <= 0) {
        printf("Masukkan tahanan tidak boleh negatif.");
        return 0;
    }

    total = tahanan1 + tahanan2 + tahanan3;

    printf("Total tahanan seri adalah : %d", total);

    return 0;
           }
