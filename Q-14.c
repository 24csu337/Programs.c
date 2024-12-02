/* Given an array of n integers. The task is to print the duplicates in the given array.
If there are no duplicates then print -1.
Examples:
Input: {2, 10,10, 100, 2, 10, 11,2,11,2}
Output: 2 10 11
Input: {5, 40, 1, 40, 100000, 1, 5, 1}
Output: 5 40 1
*/

#include <stdio.h>

int main() {
    int num ;
    printf("Enter the total number of elements in the array: ");
    scanf("%d", &num);
    
    int arr[num];
    int duplicates[num];
    int count = 0;

    for (int i = 0; i < num; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < num; i++) {
        for (int j = i + 1; j < num; j++) {
            if (arr[i] == arr[j]) {
                int preExists = 0;
                for (int k = 0; k < count; k++) {
                    if (duplicates[k] == arr[i]) {
                        preExists = 1;
                        break;
                    }
                }
                if (!preExists) {
                    duplicates[count++] = arr[i];
                }
                break;
            }
        }
    }

    if (count == 0) {
        printf("-1\n");
    } else {
        printf("Duplicates: ");
        for (int i = 0; i < count; i++) {
            printf("%d ", duplicates[i]);
        }
        printf("\n");
    }

    return 0;
}
