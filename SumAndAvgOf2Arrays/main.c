#include <stdio.h>
#include <stdlib.h>

int main()
{

   int i,j,rows,cols,arr1[4][4];
    scanf("%d%d", & rows, & cols);
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){

            printf("enter first matrix  ");
             scanf("%d", & arr1[i][j]);

        }
    }


    for(int i=0;i<rows;i++)
    {
        int rowSum=0;
        for(int j=0;j<cols;j++)
        {
            rowSum=rowSum+arr1[i][j];
        }
        printf("\nSum of all the elements in row %d is %d\n",i,rowSum);
    }

    for(int j=0;j<cols;j++)
    {
        int ColAvg=0;
        for(int i=0;i<rows;i++)
        {
            ColAvg=(ColAvg+arr1[i][j])/rows;
        }
        printf("\nAverage of all the elements in coloumn %d is %d\n",j,ColAvg);
    }
    return 0;
}
