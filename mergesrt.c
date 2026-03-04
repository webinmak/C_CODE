#include <stdio.h>
int n;
int main()
{
 int arr[10], i;
 // Input number of elements
 printf("Enter the number of elements to be sorted: ");
 scanf("%d", &n);
 // Input array elements
 printf("Enter %d elements to be sorted:\n", n);
 for (i = 0; i < n; i++) {
 printf("Arr[%d] = ", i);
 scanf("%d", &arr[i]);
 }

// Call merge sort
 divide(arr, 0, n - 1);
 // Print sorted array
 printf("\nSorted array is:\t");
 for (i = 0; i < n; i++) {
 printf("%4d", arr[i]);
 }
 printf("\n");
 return 0;
}
// Recursive function to divide the array
void divide(int arr[], int l, int r) {
if (l < r) {
 int m = (l + r) / 2;
 // Divide left half
 divide(arr, l, m);
 // Divide right half
 divide(arr, m + 1, r);
 // Merge the sorted halves
 merge(arr, l, m, r);
 }
}
// Function to merge two sorted sub-arrays
void merge(int arr[], int l, int m, int r) {

int i, j, k;
 int n1 = m - l + 1; // Size of left sub-array
 int n2 = r - m; // Size of right sub-array
 // Temporary arrays
 int L[n1], R[n2];
 // Copy data to temporary arrays
 for (i = 0; i < n1; i++)
 L[i] = arr[l + i];
 for (j = 0; j < n2; j++)
 R[j] = arr[m + 1 + j];
 i = 0; j = 0; k = l;
// Merge the temp arrays back into arr[l..r]
 while (i < n1 && j < n2) {
 if (L[i] <= R[j]) {
 arr[k] = L[i];
 i++;
 } else {
 arr[k] = R[j];
 j++;
 }
 k++;
 }
 // Copy remaining elements of L[], if any
 while (i < n1) {
arr[k] = L[i];
 i++;
 k++;
 }
 // Copy remaining elements of R[], if any
 while (j < n2) {
 arr[k] = R[j];
 j++;
 k++;
 }
}
