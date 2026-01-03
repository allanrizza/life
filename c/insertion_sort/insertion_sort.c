#include <stdio.h>

void insertion_sort(int arr[], int size) {
    for(int i = 1; i < size; i++) {
        int k = arr[i];
        int j = i-1;

        while(j>=0 && arr[j] > k) {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = k;
    }   
}

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {3,4,1,2,8,5};

    insertion_sort(arr, sizeof(arr) / sizeof(arr[0]));

    print_array(arr, sizeof(arr)/sizeof(arr[0]));
}
