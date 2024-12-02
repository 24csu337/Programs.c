// WAP to find Who & how many students have scored 99 in an array Marks.

# include<stdio.h>
int main(){
    int n;
    printf("enter the number of students:\n",n);
    scanf("%d", &n);
    int count=0;

    int marks[n];
    printf("enter marks for %d students:\n",n);
    for(int i = 0; i < n; i++){
        printf("mark of student %d: ", i+1);
        scanf("%d",&marks[i]);
    }
    int found=0;    // Flag to find if 99 is found

    for (int i=0; i<n; i++){
        if (marks[i]==99){
            printf("The %d student to score 99 is at index %d (student %d)\n", i+1, i, i+1);
            found = 1;
            count++;
        }
    }
    if(count == 0){
        printf("No student scored 99.\n");
    }
    else{
        printf("Total no of students who scored 99 marks:%d\n", count);
    }

    return 0;
}