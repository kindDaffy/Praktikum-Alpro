/*
Nama Program  : nomorHari.c
Deskripsi     : Menampilkan nama nama hari dari nomor hari 1 sampai dengan 7.
Nama Pembuat  : Muhammad Daffa Aradhana Adriansyah
NIM           : 24060122120022
Tanggal       : 28 Februari 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Kamus Lokal
    int nomor_hari;

    // Algoritma
    printf("Masukkan nomor hari (1-7): ");
    scanf("%d", &nomor_hari);

    if (nomor_hari < 1 || nomor_hari > 7) {
        printf("Masukan nomor hari tidak tepat\n");
    }
    else {
        switch (nomor_hari) {
            case 1:
                printf("Hari ke-1 adalah hari Senin\n");
                break;
            case 2:
                printf("Hari ke-2 adalah hari Selasa\n");
                break;
            case 3:
                printf("Hari ke-3 adalah hari Rabu\n");
                break;
            case 4:
                printf("Hari ke-4 adalah hari Kamis\n");
                break;
            case 5:
                printf("Hari ke-5 adalah hari Jumat\n");
                break;
            case 6:
                printf("Hari ke-6 adalah hari Sabtu\n");
                break;
            case 7:
                printf("Hari ke-7 adalah hari Minggu\n");
                break;
            default:
                printf("Masukkan nomor hari tidak tepat");
            }
        }

    return 0;
}
