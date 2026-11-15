#include <stdio.h>

int main(void)
{
    int n;
    int i;
    long sum = 0;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("NG");
        return 0;
    }
    for (i = 1; i < n + 1; i++)
    {
        sum += i;
    }
    printf("%ld", sum);
    return 0;
}
