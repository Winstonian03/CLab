#include <stdio.h>

int main()
{
    int i = 1;
    for(; i <= 10; ++i)
    {
        for(int j = i; j >= 1; --j)
        {
            printf("%s", "*");
        }
        puts("");
    }
    puts("");   

    int x = 10;
    for(; x >= 1; --x)
    {
        for(int y = x; y >= 1; --y)
        {
        printf("%s", "*");
        }
        puts("");
    }
    puts("");

    int a = 0;
        for(; a <= 10; ++a)
        {
            for(int b = a; b >= 1; --b)
            {
                printf("%s", " ");
            }
        
            for(int c = 0; c < 10 - a; c++)
            {
                printf("%s", "*");
            }
            puts("");
        }

    int t = 1;
        for(; t <= 10; ++t)
        {
            for(int s = 10 - t; s >= 1; --s)
            {
                printf("%s", " ");
            }
    
            for(int u = t; u >= 1; --u)
            {
                printf("%s", "*");
            }
            puts("");
        }
        puts("");

    return 0;
}