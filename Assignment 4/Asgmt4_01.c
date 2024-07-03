//write a program to built max heap.
#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void MaxHeapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        MaxHeapify(arr, n, largest);
    }
}


void BuildMaxHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        MaxHeapify(arr, n, i);
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}


void main() {
    int n,i;
    int arr[100];
    printf("Enter the length of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: \n");
    for(i=0;i<n;i++){
         scanf("%d",&arr[i]);
    }

    printf("Original array: \n");
    printArray(arr, n);

    BuildMaxHeap(arr, n);

    printf("Array after max heap: \n");
    printArray(arr, n);
}