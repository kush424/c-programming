#include <stdio.h>

// Function to calculate the sum of the array
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;

    // Prompt user for array size
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    // Prompt user for array elements
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Calculate the sum using the UDF
    int total = sumArray(arr, size);

    // Display the result
    printf("The sum of the array: %d\n", total);

    return 0;
}
