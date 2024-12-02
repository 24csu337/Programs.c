/* Given an array, the task is to cyclically rotate the array clockwise by one time.
Examples:
Input: arr[] = {1, 2, 3, 4, 5}
Output: arr[] = {5, 1, 2, 3, 4}
Input: arr[] = {2, 3, 4, 5, 1}
Output: {1, 2, 3, 4, 5}
*/

#include <stdio.h>
int main() {
    int num ;
    printf("Enter total number of elements in the array: ");
    scanf("%d", &num );
    
    int arr[num];

    for (int i = 0; i < num ; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Array before cyclic rotation: ");
    for (int i = 0; i < num ; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    if (num > 1) {
        int last = arr[num - 1];
        for (int i = num - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = last;
    }

    printf("Array after cyclic rotation: ");
    for (int i = 0; i < num ; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
