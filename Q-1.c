// WAP to increase every student mark by 5 & then print the updated array.

#include<stdio.h>
int main() {
    int n;
    printf("enter the number of students: ");
    scanf("%d", &n);

    int marks[n];
    printf("enter the marks for %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("mark of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < n; i++) {
        marks[i] += 5;
    }

    printf("\nupdated marks after adding 5:\n");
    for (int i = 0; i < n; i++) {
        printf("mark of student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
