#include <stdio.h>

int main(){
    int arr[100],n,search,found=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &search);
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Element found at index %d.\n", i);
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("Element not found in the array.\n");
    }
    return 0;
}