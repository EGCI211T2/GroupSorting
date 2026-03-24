#ifndef SORTING_H
#define SORTING_H

#include <iostream>
#include <iomanip>

void display(int a[], int n) {
    for (int i = 0; i < n; i++)
        std::cout << std::setw(5) << a[i];
    std::cout << std::endl;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int a[], int n) {
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            if (a[i] < a[i + 1])
                swap(a[i], a[i + 1]);
            display(a, n);
        }
        std::cout << std::endl;
    }
}

void selectionSort(int data[], int n) {
    int i, j, mi;
    for (i = 0; i < n; i++) {
        mi = i;
        for (j = i + 1; j < n; j++) {
            if (data[j] > data[mi])
                mi = j;
        }
        swap(data[i], data[mi]);
        display(data, n);
        std::cout << std::endl;
    }
}

void insertion(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && key > a[j]) {
            a[j + 1] = a[j];
            display(a, n);
            j--;
        }
        a[j + 1] = key;
        display(a, n);
        std::cout << std::endl;
    }
}

#endif




