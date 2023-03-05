/*
Nama Program    : volBolaKerct.c
Deskripsi       : Menghitung dan menampilkan volume bola dan kerucut. Rumus volume kerucut = Vb= 4/3 * (Phi * r*r*r)
Nama Pembuat    : Muhammad Daffa Aradhana Adriansyah
NIM             : 24060122120022
Tanggal         : Minggu, 26 Februari 2023 20.50 WIB
*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //Kamus Lokal
    float r, Vb, Vk;
    const float PHI = 3.1415;

    //Algoritma
    printf("program volume bola kerucut \n");
    printf("masukkan nilai r:");
    scanf("%f", &r);

    Vb = (4/3) * (PHI *r *r * r);
    printf("volume bola adalah : %.2f\n", Vb);

    Vk = (Vb/2);
    printf("volume kerucut adalah : %.2f", Vk);
return 0;
}
