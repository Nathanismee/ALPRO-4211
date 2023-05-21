#include <iostream>
using namespace std;

void displayArray(int arr[], int size) {
    cout << "Array sebelum diurutkan: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] >= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivot_index = partition(arr, low, high);
        quicksort(arr, low, pivot_index - 1);
        quicksort(arr, pivot_index + 1, high);
    }
}

void quicksort_descending(int arr[], int size) {
    quicksort(arr, 0, size - 1);
}

int main() {
    int arr[] = {4, 2, 5, 1, 3, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    displayArray(arr, size);

    quicksort_descending(arr, size);

    cout << "Array yang sudah diurutkan secara descending: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
