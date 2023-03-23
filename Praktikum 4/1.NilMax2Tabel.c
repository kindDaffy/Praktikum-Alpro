/*
Nama Program  : NilMax2Tabel.c
Deskripsi     : Menampilkan nilai maksimum kedua dari sebuah tabel.
Nama Pembuat  : Muhammad Daffa Aradhana Adriansyah
NIM           : 24060122120022
Tanggal       : 14 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tabel[100];
    int i;
    int n;
    int max1 = 0;
    int max2 = 0;

    printf("Masukkan panjang array: ");
    scanf("%d", &n);

    for (i = 0 ; i<n ; i++){
        printf("Masukkan indeks ke - %d: ", i);
        scanf ("%d", &tabel[i]);
    }

    for (i = 0 ; i<n ; i++){
        if (tabel[i] > max1){
            max2 = max1;
            max1 = tabel[i];
        } else if (tabel[i] > max2 && tabel[i] < max1){
            max2 = tabel[i];
        }
    }

    printf("%d", max2);



    return 0;
}
