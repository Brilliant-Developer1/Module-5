#include <stdio.h>
int main()
{
    char input;
    scanf("%c", &input);

    if (input >= '0' && input <= '9')
    {
        printf("IS DIGIT");
    }
    else
    {
        printf("ALPHA\n");
        if (input >= 'a' & input <= 'z')
        {
            printf("IS SMALL\n");
        }
        else
        {
            printf("IS CAPITAL\n");
        }
    }

    return 0;
}