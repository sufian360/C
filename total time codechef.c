// Update the program below to solve the problem

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int X, Y, total_time;
        scanf("%d %d", &X,&Y);

        total_time = X-Y + Y/2;
        printf("%d\n",total_time);
    }

    return 0;
}
