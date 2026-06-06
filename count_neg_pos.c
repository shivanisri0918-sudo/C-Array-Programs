#include <stdio.h>
int main() {
    int arr[100], n, i, count_pos = 0, count_neg = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    
        if (arr[i] > 0) {
            count_pos++;
        } else if (arr[i] < 0) {
            count_neg++;
        }
    }

    printf("Number of positive elements: %d\n", count_pos);
    printf("Number of negative elements: %d\n", count_neg);

    return 0;
}