// WAP to find average score of the Marks array.

#include<stdio.h>
int main(){
    int n;
    printf("enter the number of students:\n");
    scanf("%d",&n);
    float sum=0;
    float avg;

    int marks[n];
    printf("enter the marks for %d student:\n", n);
    for (int i=0; i<n; i++){
        printf("marks of %d student: ", i+1);
        scanf("%d", &marks[i]);
    }
    for (int i=0; i<n; i++){
        sum += marks[i];
    }
    avg = sum/n;
    printf("The average score is %.2f\n", avg);

    return 0;
}