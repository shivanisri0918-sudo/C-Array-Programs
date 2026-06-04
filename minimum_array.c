#include <stdio.h>
int main(){
    int arr[5];
    int min;

    printf("Enter 5 integers:\n");
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for(int i=1; i<5; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Minimum of the integers is: %d\n", min);
    return 0;
}