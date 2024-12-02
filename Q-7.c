// WAP to check whether score is even or odd in an array.

#include <stdio.h>
int main(){

    int n;
    printf("enter the number of students: ");
    scanf("%d", &n);

    int marks[n];
    printf("enter the marks for %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("mark of student %d: ", i+1);
        scanf("%d", &marks[i]);
    }

    for(int i = 0; i < n; i++) {
        if(marks[i] % 2 == 0) {
            printf("Student %d (Index %d) has an even score of %d\n", i+1, i, marks[i]);
        }
        else {
            printf("Student %d (Index %d) has an odd score of %d\n", i+1, i, marks[i]);
        }
    }

    return 0;
}
