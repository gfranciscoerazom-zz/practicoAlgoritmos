#include <stdio.h>

int particion(int arr[], int low, int high) {
    int save;
    int smallerElement = low - 1;
    int pivot = arr[high];

    for (int j = low; j <= high; j++) {
        if(arr[j] < pivot) {
            smallerElement++;
            save = arr[smallerElement];
            arr[smallerElement] = arr[j];
            arr[j] = save;
        }
    }
    save = arr[smallerElement+1];
    arr[smallerElement + 1] = arr[high];
    arr[high] = save;
    return smallerElement + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int particionIndex = particion(arr, low, high);
        quickSort(arr, low, particionIndex-1);
        quickSort(arr, particionIndex + 1, high);
    }
}

int main() {
    int arr[] = {1992, 1990, 10, 5, 6, 100, 0, 1, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Array ordenado: ");
    for(int i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }
    return 0;
}