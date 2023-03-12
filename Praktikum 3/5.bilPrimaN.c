/*
Nama Program  : bilPrimaN.c
Deskripsi     : Mencetak bilangan prima sampai dengan bilangan interger ke - N.
Nama Pembuat  : Muhammad Daffa Aradhana Adriansyah
NIM           : 24060122120022
Tanggal       : 11 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    //Kamus Lokal
    int n;
    int i;
    int faktor;
    int j;

    //Algoritma
    printf("Masukkan bilangan interger: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("Bilangan primanya adalah ");
        for (i = 1; i <= n; i++){
            faktor = 0;
            for (j = 1 ; j <= i ; j++){
                if ( i % j == 0 ){
                    faktor ++;
                }
            }
            if (faktor == 2){
                printf("%d ", i);
            }
        }
    }

    return 0;
}
