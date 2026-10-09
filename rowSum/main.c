#include <stdio.h>

int a[5][5] = {
    {8, 3, 9, 0, 10},
    {3, 5, 17, 1, 1},
    {2, 8, 6, 23, 1},
    {15, 7, 3, 2, 9},
    {6, 14, 2, 6, 0}
};
int rowSum =0,columnSum =0;

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
    j =0;

      while(j<5)
    {
        for(i=0; i<5;i++)
        {
            rowSum += a[i][j];
        }
        printf("Sum of column %d is %d\n", j+1, rowSum);
        columnSum = 0; // Reset rowSum for the next column
        j++;
    }
}
