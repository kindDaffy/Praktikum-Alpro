/*
Nama Program    : JarakPBola.c
Deskripsi       : Menghitung dan menampilkan jarak yang ditempuh oleh suatu benda ketika mengalami gerak parabola dengan rumus y = v0 * t - ½ * (g * t2)
Nama Pembuat    : Muhammad Daffa Aradhana Adriansyah
NIM             : 24060122120022
Tanggal         : Minggu, 26 Februari 2023 18.17 WIB - 18.35 WIB
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    float v0, t, y;
    const float g = 9.8;

    //Algoritma
    printf("Masukkan nilai v0 : ");
    scanf("%f", &v0);

    printf("Masukkan nilai t : ");
    scanf("%f", &t);

    y = v0 * t - (g*t*t)/2;



    printf("y = %.2f", y);

    return 0;
}
