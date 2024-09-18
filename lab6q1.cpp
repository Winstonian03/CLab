#include <stdio.h>
#define MAX 20
#include <stdbool.h>

int main()
{
  int a[MAX] = {0};                                   //initialize array with 0s
  int k = 0;

  printf("Enter 20 integers between 10 and 100:\n");

  for (int i = 0; i <= MAX - 1; ++i)                  //increment array
  {
    bool duplicate = false;                           //set duplicate to false
    int value;
    scanf("%d", &value);                              //set input into value var

    for(int j = 0; j < k; ++j)                      //checks starting from 0th pos in the array, incrementing up to k
    {
      if (value == a[j])
        {
          duplicate = true;                         // checks for duplicates, if true, break
          break;
        }
    }
    if (!duplicate)                                 // if not duplicate, add into array, and increment array pos
    {
      a[k++] = value;
    }
  }
  puts("\nThe nonduplicate values are:");

  for (int i = 0; a[i] != 0 ; ++i)                // prints entire array
    printf("%d  ", a[i]);
  puts("");

  return 0;
}