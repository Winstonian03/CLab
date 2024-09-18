#include <stdio.h>
#include <math.h>

int main()
{
    int min,max,v1,v2,v3;
    printf("Enter three different integers: ");
    scanf("%d%d%d",&v1,&v2,&v3);

    min=v1;
    max=v1;

    if(min>v2) 
        min=v2;
    else if(max<v2)
        max=v2;
    if(min>v3) 
        min=v3;
    else if(max<v3)
        max=v3;

    printf("Sum is %d\n", (v1 + v2 + v3));
    printf("Average is %d\n", ((v1 + v2 + v3)/3));
    printf("Product is %d\n", (v1 * v2 * v3));

    printf("Smallest number is %d\n", min);
    printf("Largest number is %d\n", max);

    return 0;
}