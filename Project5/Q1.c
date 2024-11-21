#include <stdio.h>

int main() {
    int n;

    
    printf("Enter the array's size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array's elements:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Negative elements from an Array: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}