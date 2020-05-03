#include <stdio.h>
#include <stdlib.h>

int main()
{
    int food;
    printf(" choose any one option: \n 1\n 2\n 3\n 4\n 5\n");
    scanf("%d",&food);

    switch(food)
    {

    case 1:
        printf("food item= burger \n price = Rs129 \n");
        break;
    case 2:
        printf("food item= pizza \n price= Rs239 \n");
        break;


    case 3: printf("food item= french fries \n price= Rs99 \n");
        break;


    case 4: printf("food item= pasta \n price= Rs179 \n");
        break;

    case 5: printf("food item= sandwich \n price= Rs149\n");
        break;

    default:
        printf("invalid option");
    }
}
