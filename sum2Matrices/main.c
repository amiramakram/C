#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,rows,cols,arr1[4][4],arr2[4][4],sum[4][4];
    scanf("%d%d", & rows, & cols);
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){

            printf("enter first matrix  ");
 scanf("%d", & arr1[i][j]);
        }
    }
     for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){

            printf("enter second matrix  ");
 scanf("%d", & arr2[i][j]);
        }
    }
printf("\n sum matrix\t\t");
     for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d\t",sum[i][j]);

        }
    }
    return 0;
}
