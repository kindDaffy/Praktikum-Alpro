/*
Nama Program  : kalkSS.c
Deskripsi     : Menghitung dan menampilkan kedua bilangan iA dan iB yang dihitung menggunakan operasi sesuai inputan pengguna.
Nama Pembuat  : Muhammad Daffa Aradhana Adriansyah
NIM           : 24060122120022
Tanggal       : 4 Maret 2023 19.03 WIB
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int iA, iB;
    char opsi;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &iA);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &iB);

    printf("Pilih operasi aritmatika (a - f): ");
    scanf(" %c", &opsi);

    if(opsi == 'a') {
        printf("Hasil %d + %d = %d\n", iA, iB, iA+iB);
    }
    else if(opsi == 'b') {
        printf("Hasil %d - %d = %d\n", iA, iB, iA-iB);
    }
    else if(opsi == 'c') {
        printf("Hasil %d * %d = %d\n", iA, iB, iA*iB);
    }
    else if(opsi == 'd') {
        printf("Hasil %d / %d = %f\n", iA, iB, (float)iA/iB);
    }
    else if(opsi == 'e') {
        printf("Hasil %d div %d = %d\n", iA, iB, iA/iB);
    }
    else if(opsi == 'f') {
        printf("Hasil %d mod %d = %d\n", iA, iB, iA%iB);
    }
    else {
        printf("Bukan pilihan menu yang benar\n");
    }

    return 0;
}
