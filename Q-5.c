// WAP to find sum of all scores in Marks array.
#include<stdio.h>

int main(){
    int n;
    printf("enter the number of students:");
    scanf("%d", &n);
    int sum=0;

    int marks[n];
    printf("enter the marks for %d students:\n", n);
    for (int i = 0; i < n; i++){
        printf("mark of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    for(int i = 0; i < n; i++) {
        sum += marks[i];
    }
    printf("The sum of all scores is: %d\n", sum);

    return 0;
}
