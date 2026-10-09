#include <stdio.h>

int a[5][5] = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15},
    {16, 17, 18, 19, 20},
    {21, 22, 23, 24, 25}
};
int rowSum =0;

int main()
{
    int i = 0, j = 0;

    while(i<5)
    {
        for(j=0; j<5;j++)
        {
            rowSum += a[i][j];
        }
        printf("Sum of row %d is %d\n", i+1, rowSum);
        rowSum = 0; // Reset rowSum for the next row
        i++;
    }
}