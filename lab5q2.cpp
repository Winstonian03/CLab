#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int num;
    int guess = 0;
    char again;
    
    srand(time(NULL));
    num = ((rand()) % 1000) + 1;

    while(1)
    {
        printf("Answer: %d\n", num);
        printf("I have a number between 1-1000.\n");
        printf("Can you guess my number?\n");
        printf("Please type your first guess.\n");
        
        while (guess != num)
        {
            scanf("%d", &guess);

            if(guess > num)
                printf("Too high\n");

            if (guess < num)
                printf("Too low\n"); 

            if(guess == num)
             {  
                printf("Excellent! You guessed the right number\n");
                printf("play again?\n");
                scanf("%s", &again);
                if (again != 'y')
                    return 0;
                main();
                break;
             }
             
        }
    }
}