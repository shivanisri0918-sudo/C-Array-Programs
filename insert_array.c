#include <stdio.h>
int main() {
    int arr[100],n,element,index;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%d",&element);
    printf("Enter the index where the element is to be inserted: ");
    scanf("%d",&index);
    for(int i=n-1;i>=index;i--) {
        arr[i]=arr[i-1];
    }
    arr[index]=element;
    printf("Array after insertion: ");
    for(int i=0;i<n+1;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}