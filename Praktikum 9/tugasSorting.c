/*
Nama Program  : tugasSorting.c
Deskripsi     : Mengurutkan data dalam indeks dengan opsi untuk sortingnya.
Nama Pembuat  : Muhammad Daffa Aradhana Adriansyah
NIM           : 24060122120022
Tanggal       : 20 Mei 2023
*/

#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void countingSort(int arr[], int size) {
    int max = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int count[max + 1];
    int output[size];

    for (int i = 0; i <= max; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    for (int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }

    for (int i = size - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for (int i = 0; i < size; i++) {
        arr[i] = output[i];
    }
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}


void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int size;
    printf("Masukkan panjang array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Masukkan arraynya:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array yang belum terurut: ");
    printArray(arr, size);

    char option;
    printf("Pilih opsi sorting (A: Bubble Sort, B: Counting Sort, C: Insertion Sort, D: Selection Sort): ");
    scanf(" %c", &option);

    switch (option) {
        case 'A':
            bubbleSort(arr, size);
            printf("Array yang sudah terurut dengan Bubble Sort: ");
            printArray(arr, size);
            break;
        case 'B':
            countingSort(arr, size);
            printf("Array yang sudah terurut dengan Counting Sort: ");
            printArray(arr, size);
            break;
        case 'C':
            insertionSort(arr, size);
            printf("Array yang sudah terurut dengan Insertion Sort: ");
            printArray(arr, size);
            break;
        case 'D':
            selectionSort(arr, size);
            printf("Array yang sudah terurut dengan Selection Sort: ");
            printArray(arr, size);
            break;
        default:
            printf("Opsi yang Anda pilih tidak valid.\n");
            break;
    }

    return 0;
}
