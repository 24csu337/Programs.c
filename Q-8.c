// WAP to find maximum & minimum score in the Marks array.

#include <stdio.h>

int main() {
    int n;
    printf("enter the number of students: ");
    scanf("%d", &n);

    int marks[n];
    printf("enter the marks for %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("mark of student %d: ", i+1);
        scanf("%d", &marks[i]);
    }

    int max = marks[0];
    int min = marks[0];

    for(int i = 1; i < n; i++) {
        if(marks[i] > max) {
            max = marks[i];
        }
        if(marks[i] < min) {
            min = marks[i];
    }
     }

    printf("The maximum score is: %d\n", max);
    printf("The minimum score is: %d\n", min);

    return 0;
}
