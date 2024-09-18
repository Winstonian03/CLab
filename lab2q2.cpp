#include <stdio.h>
#include <math.h>

int main()
{
    int a5, v1, v2, v3, v4, v5;
    printf("Please enter a 5 digit number: \n");
    scanf("%d", &a5);   

    v1 = (a5 / 10000);

    v2 = (a5 - (v1 * 10000)) / 1000;

    v3 = (a5 - (v1 * 10000 + v2 * 1000)) / 100;

    v4 = (a5 - (v1 * 10000 + v2 * 1000 + v3 * 100)) / 10;

    v5 = (a5 - (v1 * 10000 + v2 * 1000 + v3 * 100 + v4 * 10));
    
    printf("%d %d %d %d %d", v1, v2, v3, v4, v5);

    return 0;
}