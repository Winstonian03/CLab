#include <stdio.h>

int main()
{
  int total = 1;

  printf("%1s %20s\n", "n!", "Total");

  for(int i = 1; i <= 5; ++i)
  {
    total = i * total;
    printf("%1d %20d\n", i , total);
  }

  return 0;
}
