
#include <stdio.h>

int main()
{
    int i;

    printf("PWM Simulation:\n");

    for(i = 1; i <= 10; i++)
    {
        if(i <= 5)
            printf("1");
        else
            printf("0");
    }

    printf("\n");
    return 0;
}
