/*
Nama Program    : JarakGLBB.c
Deskripsi       : Menghitung dan menampilkan jarak yang ditempuh suatu benda yang mengalami gerak lurus berubah beraturan dengan rumus S = v0 * t + 1/2 * (a * t˛)
Nama Pembuat    : Muhammad Daffa Aradhana Adriansyah
NIM             : 24060122120022
Tanggal         : Minggu, 26 Februari 2023 18.04 WIB
*/
#include <stdio.h>

#include <stdlib.h>

int main()
{
    //Kamus Lokal
    float v0;
    float t;
    float a;
    float s;

    //Algoritma
    printf("Masukkan Kecepatan Awal: ");
    scanf("%f", &v0);

    printf("Masukkan waktu : ");
    scanf("%f", &t);

    printf("Masukkan percepatan: ");
    scanf("%f", &a);

    s = v0 * t + 0.5 * (a*pow(t,2));



    printf("s = %f\n",s);
    return 0;
}
