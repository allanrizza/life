#include <stdio.h>

int selection_sort(int nums[], int size) {
    int count = 0;
    while(count < size - 1) {
        int min = count;
        for (int i = count+1; i < size; i++) {
            if(nums[i] < nums[min]) {
                min = i;
            }
        }
        int temp = nums[count];
        nums[count] = nums[min];
        nums[min] = temp;
        count++;
    }
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {2,5,1,3,8,1,1,8,3};

    selection_sort(arr, sizeof(arr) / sizeof(arr[0]));

    print_array(arr, sizeof(arr) / sizeof(arr[0]));
}
