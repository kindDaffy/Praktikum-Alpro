/*
Nama Program  : bilSempN.c
Deskripsi     : Mencetak bilangan sempurna sampai dengan bilangan interger ke - N.
Nama Pembuat  : Muhammad Daffa Aradhana Adriansyah
NIM           : 24060122120022
Tanggal       : 11 Maret 2023
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int i;
    int j;
    int faktor;
    int sum;

    printf("Masukkan bilangan integer: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("Bilangan sempurna hingga %d: ", n);
        for (i = 1; i <= n; i++) {
            faktor = 0;
            sum = 0;
            for (j = 1; j < i; j++) {
                if (i % j == 0) {
                    faktor++;
                    sum += j;
                }
            }
            if (sum == i) {
                printf("%d ", i);
            }
        }
    }

    return 0;
}
