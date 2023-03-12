/*
Nama Program  : cekBilPrima.c
Deskripsi     : Mencari dan menampilkan apakah bilangan interger tersebut prima serta menampilkan faktor - faktornya.
Nama Pembuat  : Muhammad Daffa Aradhana Adriansyah
NIM           : 24060122120022
Tanggal       : 5 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    int bil;
    int i;
    int faktor=0;

    printf("Masukkan bilangan interger: ");
    scanf("%d", &bil);

    for (i = 1; i <= bil; i++){
        if (bil % i ==0){
            faktor++;
        }
    }

    if (faktor == 2){
        printf("%d adalah bilangan prima, {faktor bilangannya adalah 1 dan %d}", bil, bil);
    } else{
        printf("%d bukan bilangan prima, {faktor bilangannya adalah ", bil);
        for (i = 1; i<= bil ; i++){
            if (bil % i == 0){
                printf("%d",i);
                if ( i != bil){
                    printf(", ");
            }

        }
    }
    printf("}");
    }
    return 0;
}
