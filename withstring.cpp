#include <stdio.h>
#include <string.h>
main()
{
    char s1[20], s2[20];
    printf("\nEnter first string: ");
    gets(s1);
    printf("\nEnter second string: ");
    gets(s2);
    strcat(s1, s2);
    printf("\nThe concatenated string is: %s", s1);
    getch();
}
