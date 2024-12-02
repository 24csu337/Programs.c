/* WAP to print grade of students as per their marks given in an array
(>=75-- A grade, 74 to 60--B Grade, 59 to 40--C grade below 40--D grade).*/

#include<stdio.h>
int main(){
    int n;
    printf("enter the number of students:");
    scanf("%d", &n);

    int marks[n];
    printf("enter the marks for %d students: \n", n);
    for (int i = 0; i < n; i++){
        printf("mark of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    
    for(int i = 0; i < n; i++){
        printf("Student %d: Marks = %d, Grade = ", i + 1,marks[i]);
        
        if(marks[i] >= 75) {
            printf("A Grade\n");
        }
        else if(marks[i] >= 60) {
            printf("B Grade\n");
        }
        else if(marks[i] >= 40) {
            printf("C Grade\n");
        }
        else if(marks[i] >= 0 && marks[i] < 40){
            printf("D Grade\n");
        }
        else{
            printf("invalid marks!\n");
        }
    }

    return 0;
}
