#include <stdio.h>

int a,b;
int main(){
    printf("Enter A B\n");
    scanf("%d%d",&a,&b);

    while (getchar() != '\n') {
        /* Consume the remaining input line. */
    }

    printf((a > b) ? "A is greater" :
           (a < b) ? "B is greater" :
                      "Both are equal");
    printf("\nPress Enter to exit...\n");
    getchar();
    return 0;
}