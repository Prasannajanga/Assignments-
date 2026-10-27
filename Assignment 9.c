#include<stdio.h>
int main()
{
    char x;
    printf("Enter any alphabet:");
    scanf(" %c", &x);
    if (x == 'a' || x == 'e' || x == 'i' ||
        x == 'o' || x == 'u' ||
        x == 'A' || x == 'E' || x == 'I' ||
        x == 'O' || x == 'U')
        printf("Vowel");
    else
        printf("Not a vowel");

    return 0;
 }