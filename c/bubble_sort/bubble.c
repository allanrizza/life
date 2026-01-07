#include <stdio.h>

void bubble_sort(int arr[], int size) {
	for(int i = 0; i < size-1; i++) {
		for(int j = 0; j < size-1; j++) {
			if(arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void print_array(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d\n", arr[i]);
	}
}

int main() {
	int arr[] = {5,2,4,3,1};
	printf("array before: \n");
	print_array(arr, sizeof(arr)/sizeof(arr[0]));
	bubble_sort(arr, sizeof(arr)/sizeof(arr[0]));
	printf("array after: \n");
	print_array(arr, sizeof(arr)/sizeof(arr[0]));
}
