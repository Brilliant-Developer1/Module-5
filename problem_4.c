#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);
    int ans = input / 1000; // 25%10= 20
    if (ans % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }

    return 0;
}