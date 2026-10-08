#include <stdio.h>
int grade;
int main(){
    printf("Enter Your Marks\n");
    scanf("%d",&grade);
while (getchar() != '\n') {
        /* Consume the remaining input line. */
    }
    printf("Your Grade is: ");
    printf((grade>=90) ? "A" :
           (grade>=80) ? "B" :
           (grade>=70) ? "C" :
           (grade>=60) ? "D" : "F");
           getchar();
           return 0;
}