#include <stdio.h>
int main()
{
    int n, i;
    float num[100], sum = 0.0, mean;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    while (n > 100 || n <= 0)
    {
        printf("Error! number should be in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }
    for(i = 0; i < n; ++i)
    {
        printf("%d. Enter number: ", i+1);
        scanf("%f", &num[i]);
        sum += num[i];
    }
    mean = sum / n;
    printf("The arithmetic mean of ");
    for(i = 0; i < n; ++i)
    {
        printf("%f ", num[i]);
        if(i == n-1)
            printf("is %f", mean);
    }
    return 0;
}
