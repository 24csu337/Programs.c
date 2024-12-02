// WAP to find who scored first “99” in an array marks.
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

    int found = 0;  // Flag to check if 99 is found

    for(int i = 0; i < n; i++) {
        if(marks[i] == 99) {
            printf("The first student to score 99 is at index %d (Student %d)\n", i, i + 1);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("No student scored 99.\n");
    }

    return 0;
}

