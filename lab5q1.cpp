#include <stdio.h>

enum prime {PRIME, COMPOSITE};

int main()
{
  int r;
  int total = 0;

  for(int i = 2; i <= 100; ++i)
  {
    enum prime prime = PRIME;
    for(int j = 2; j <= i/2; ++j)
    {
      r = i % j;
      if (r == 0)
        prime = COMPOSITE;
    }
    if(prime == PRIME)
      printf("%d is prime\n", i);
  }
  return 0;
}
