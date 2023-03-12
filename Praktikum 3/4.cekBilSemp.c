/*
Nama Program  : cekBilSemp.c
Deskripsi     : Mencari dan menampilkan apakah bilangan interger tersebut merupakan bilangan sempurna.
Nama Pembuat  : Muhammad Daffa Aradhana Adriansyah
NIM           : 24060122120022
Tanggal       : 11 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    int num;
    int faktor = 0;

    printf("Masukkan bilangan interger: ");
    scanf("%d", &num);

    for (i = 1; i <= num*0.5; i++){
        if (num % i == 0){
            faktor += i;
        }
    }

    if (faktor == num){
        printf("%d adalah bilangan sempurna", num);
    } else {
        printf("%d bukan bilangan sempurna", num);
    }
    return 0;

}
