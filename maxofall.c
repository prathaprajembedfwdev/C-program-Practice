#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter A B C \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    printf((a>b && a>c) ? "A is greater" :
           (b>a && b>c) ? "B is greater" :
           (c>a && c>b) ? "C is greater" : "All are equal");
    return 0;
}