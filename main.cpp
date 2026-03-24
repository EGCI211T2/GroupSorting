#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
#include "sorting.h"

int main(int argc, char **argv) {
    if (argc < 3) {
        std::cerr << "Usage: ./sort <bubble|selection|insertion> <numbers...>" << std::endl;
        return 1;
    }

    int N = argc - 2;
    int *a = new int[N];
    for (int i = 0; i < N; i++)
        a[i] = atoi(argv[i + 2]);

    if (strcmp(argv[1], "bubble") == 0)
        bubbleSort(a, N);
    else if (strcmp(argv[1], "selection") == 0)
        selectionSort(a, N);
    else if (strcmp(argv[1], "insertion") == 0)
        insertion(a, N);

    delete[] a;
    a = nullptr;
    return 0;
}
