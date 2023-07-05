#include <stdio.h>
#include <stdlib.h>

int result(int m)
{
    int count = 0;

    if (m < 1 || m > 150)
        return 0;

    for(int i = 1; i <= m; i++)
    {
        if(m % i == m / i)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int m;
    int res = 0;
    printf("Write a m numbers: ");
    scanf("%d", &m);

    res = result(m);
    printf("\nResult is: %d\n", res);
    system("Pause");
    return 0;
}