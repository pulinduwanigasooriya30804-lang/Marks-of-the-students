#include <stdio.h>
#include <stdlib.h>


int main() {
    float sub1, sub2, sub3;
    float total, average;
    char grade;


    printf("Enter marks for Mathematics : ");
    scanf("%f", &sub1);

    printf("Enter marks for Science : ");
    scanf("%f", &sub2);

    printf("Enter marks for English : ");
    scanf("%f", &sub3);


    total = sub1 + sub2 + sub3;
    average = total / 3.0;


    if (average >= 80) {
        grade = 'A';
    }
    else if (average >= 70) {
        grade = 'B';
    }
    else if (average >= 60) {
        grade = 'C';
    }
    else if (average >= 50) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }


    printf("\n--- Final Results ---\n");
    printf("Total Marks   : %.2f\n", total);
    printf("Average Marks : %.2f\n", average);
    printf("Your Grade    : %c\n", grade);


    if (sub1 >= 40 && sub2>= 40 && sub3 >= 40) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }
    return 0;
}
