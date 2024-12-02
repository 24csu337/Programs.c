// WAP to find a peak element which is not smaller than its neighbors.

#include <stdio.h>

int findPeak(int arr[], int n){
    if (n == 1) {
        return 0;
    }
    if (arr[0] >= arr[1]) {
        return 0;
    }
    if (arr[n - 1] >= arr[n - 2]) {
        return n - 1;
        }

    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return i;
            }
    }
    return -1;
    }

    int main(){
    int n;
    printf("enter the number of elements: ");
    scanf("%d", &n);

    if(n <= 0){
        printf("the input is invalid!\n");
        return 1;
    }

    int arr[n];
    printf("enter the elementsof array: \n", n);
    for (int i=0; i < n; i++){
        printf("element of array %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int peakIndex = findPeak(arr,n);

    if (peakIndex != -1){
        printf("The peak element is: %d (Index: %d)\n", arr[peakIndex], peakIndex);
    }
    else {
        printf("No peak element found!\n");
    }

    return 0;
}
