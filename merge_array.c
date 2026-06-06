#include <stdio.h>
int main() {
    int arr[50],arr2[50],arr3[100];
    int n1,n2;
    printf("Enter the size of first array: ");
    scanf("%d",&n1);
    printf("Enter the size of second array: ");
    scanf("%d",&n2);
    printf("Enter the elements of first array: ");
    for(int i=0;i<n1;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the elements of second array: ");
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    // Merging the two arrays
    for(int i=0;i<n1;i++){
        arr3[i]=arr[i];
    }
    for(int i=0;i<n2;i++){
        arr3[n1+i]=arr2[i];
    }
    printf("Merged array: ");
    for(int i=0;i<n1+n2;i++){
        printf("%d ",arr3[i]);
    }
    return 0;

}