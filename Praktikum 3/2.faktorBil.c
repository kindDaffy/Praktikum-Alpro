/*
Nama Program  : faktorBil.c
Deskripsi     : Menampilkan faktor dari masukan bilangan integer (N)
Nama Pembuat  : Muhammad Daffa Aradhana Adriansyah
NIM           : 24060122120022
Tanggal       : 5 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int num;

    printf("Masukkan bilangan berupa interger: \n");
    scanf("%d", &num);
    printf("Faktorial dari %d adalah: \n", num);
    for(i=1 ; i <= num; i++){
        if(num % i == 0){
            printf("%d\n",i);
        }
    }


    return 0;
}
