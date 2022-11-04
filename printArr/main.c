#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[6];
int i;

    for( i=0;i<6;i++){


      printf("enter element\n",i);
      //to have location of arr[i]==>&
        scanf("%d",&arr[i]);
    }
     printf("my array\t");
for(i=0;i<6;i++){

      printf("%d   ",arr[i]);

    }
    return 0;
}
