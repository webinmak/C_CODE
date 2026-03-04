#include <stdio.h>

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = 6;

    // Quick Sort (using stack recursion style inside main)
    void quickSort(int low, int high) {
        if (low >= high) return;

        int pivot = arr[low];   // First element as pivot
        int i = low, j = high;

        while (i < j) {
            while (arr[i] <= pivot && i < high) i++;
            while (arr[j] > pivot) j--;

            if (i < j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // Place pivot in correct position
        arr[low] = arr[j];
        arr[j] = pivot;

        quickSort(low, j - 1);
        quickSort(j + 1, high);
    }

    quickSort(0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
