#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,j;
  printf("enter no. of rows =");
  scanf("%d",&i);
  for(i=0;i<6;i++)
  {
      for(j=0;j<=i;j++)
        {
            printf("01");
        }
        printf("\n");
  }
}
