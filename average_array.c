#include <stdio.h>

int main(){
    int arr[5];
    int sum=0;
    float average;

    printf("Enter 5 integers:\n");
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);}
        for(int i=0; i<5; i++){
        sum += arr[i];
    }
    average = (float)sum / 5;
    printf("Average of the integers is: %f\n", average);
    return 0;
}