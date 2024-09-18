#include <stdio.h>
#define SIZE 80

int testPalindrome(char array[], int left, int right);

int main()
{
    char string[SIZE];
    char copy[SIZE];

    puts("Enter a sentence: ");
    char c;
    int count = 0;

    while((c = getchar()) != '\n' && count < SIZE)
        string[count++] = c;
    
    string[count] = '\0';
    int copyCount = 0;

    for(int i = 0; string[i] != '\0'; ++i)
    {
        if (string[i] != ' ' && string[i] != ',' && string[i] != '.' && string[i] != '!')
        {
            copy[copyCount++] = string[i];
        }
    }
    
    if(testPalindrome( copy, 0, copyCount -1))
    {
        printf("is a palindrome");
    }
    else
    {
        printf("is not a palindrome");
    }
}

int testPalindrome(char array[], int left, int right)
{
    if(left == right || left > right)
    {
        return 1;
    }
    else if (array[left] != array[right])
        return 0;
    else
        return testPalindrome(array, left +1, right -1);
}