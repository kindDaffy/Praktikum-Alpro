/*
Nama Program  : jumDeret.c
Deskripsi     : Menghitung dan menampilkan jumlah total deret.
Nama Pembuat  : Muhammad Daffa Aradhana Adriansyah
NIM           : 24060122120022
Tanggal       : 4 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int i = 1;
    int total = 0;

    printf("Masukkan N: ");
    scanf("%d", &N);

    while (i <= N) {
        total += i;
        i++;
    }

    printf("Jumlah total dari deret 1 sampai deret ke-N adalah: %d\n", total);

    return 0;
}
