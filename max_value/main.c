#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr[6]={45,6,35,0,23,90};
int i;
 printf("my max\t");
for(i=0;i<6;i++){
        if(arr[0]<arr[i]){
arr[0]=arr[i];
      printf("%d   ",arr[i]);
      }
      }


    return 0;
}
