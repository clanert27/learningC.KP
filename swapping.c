#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("enter first no.=");
    scanf("%d",&x);
    printf("enter second no.=");
    scanf("%d",&y);

    x=x-y;
    y=x+y;
    x=y-x;

    printf("swapped no. x= %d\n",x);
    printf("swapped mo. y= %d\n",y);


}
