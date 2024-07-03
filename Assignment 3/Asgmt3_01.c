//Write a c program to sort the elements of a given array using insertion sort
#include <stdio.h>
void main() {
    int i, j, len, arr[100], curr, prev;
    printf("Enter the length of the array: ");
    scanf("%d", &len);
    printf("Enter the elements of the array: \n");
    for (i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < len; i++) {
        curr = i;
        int temp = arr[curr];
        for (prev = curr - 1; prev >= 0 && arr[prev] > temp; prev--) {
            arr[prev + 1] = arr[prev];
        }
        arr[prev + 1] = temp;
    }
    printf("Sorted array: ");
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
}