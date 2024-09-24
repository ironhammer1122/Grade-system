#include<stdio.h>

int main() {
    int a;
    printf("Enter your marks:\n");
    scanf("%d", &a);
    int marks;
    if (marks<=100 && marks>=90) {
        printf("Your grade is A");
    }
    else if (marks<90 && marks>=80) {
        printf("Your grade is B");
    }
    else if (marks<80 && marks>=70) {
        printf("Your grade is C");
    }
    else if (marks<70 && marks>=60) {
        printf("Your grade is D");
    }
    else if (marks<60 && marks>=50) {
        printf("Your grade is E");
    }
    else {
        printf("You are failed");
    
    }
    return 0;
}