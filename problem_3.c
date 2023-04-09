#include <stdio.h>
#include <ctype.h>
int main()
{
    char input, lower, upper;
    scanf("%c", &input);
    lower = tolower(input);
    upper = toupper(input);
    if (isupper(input))
    {
        printf("%c", lower);
    }
    else
    {
        printf("%c", upper);
    }
    // char input;
    // scanf("%c", &input);

    // if (input >= 'a' & input <= 'z') // 97 theke 122 er majh khane kina
    // {
    //     // Lower case e convert
    //     int ans = input - 32; // input theke 32 - korle upper case pawa jabe
    //     printf("%c", ans);
    // }
    // else
    // {
    //     // upper case e convert
    //     int ans = input + 32; // input theke 32 + korle lower case pawa jabe
    //     printf("%c", ans);
    // }

    return 0;
}