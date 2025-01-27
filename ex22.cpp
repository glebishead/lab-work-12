#include <iostream>
#include <cstdlib>
#include <cmath>

const int NMAX = 10'000;

void fillArray(int* m) {
    for (int i = 0; i < NMAX; i++) {
        m[i] = NMAX - i;
    }
}

int partition(int* A, int left, int right)
{
    int k = left + rand() % (right - left + 1);
    int pivot = A[k];

    int i = left;
    int j = right;

    while (i <= j) {
        while (A[i] < pivot) i++;
        while (A[j] > pivot) j--;
        if (i >= j) break;
        std::swap(A[i++], A[j--]);
    }

    return j;
}

void quickSort(int* A, int left, int right)
{
    if (left < right) {
        int q = partition(A, left, right);
        quickSort(A, left, q);
        quickSort(A, q + 1, right);
    }
}

int main()
{
    int m[NMAX];
    fillArray(m);
    quickSort(m, 0, NMAX - 1);

    for (int i = 0; i <= NMAX - 1; i++) {
        std::cout << m[i] << " ";
    }
    return 0;
}
