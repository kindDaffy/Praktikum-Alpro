/*
Nama Program    : gayaSentr.c
Deskripsi       : Menghitung dan menampilkan gaya sentripetal yang dialami oleh benda dengan rumus F = m *(v*v/r)
Nama Pembuat    : Muhammad Daffa Aradhana Adriansyah
NIM             : 24060122120022
Tanggal         : Minggu, 26 Februari 2023 20.28 WIB
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    float m,v,r,F;

    //Algoritma
    printf("Program Gaya Sentripetal \n");
    printf("masukkan nilai m: ");
    scanf("%f", &m);
    printf("masukkan nilai v:");
    scanf("%f", &v);
    printf("masukkan nilai r: ");
    scanf("%f", &r);

    F = m *(v*v/r);
    printf("maka gaya sentripetal adalah :  %.2f", F);
return 0;
}
