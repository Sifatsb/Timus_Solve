#include<stdio.h>

int main()
{
    int i, m, n, j, count = 0;
    scanf("%d %d",&m, &n);

    for(i = 0; i < m; i++)
    {
        for(j = 0; j <= n; j++) count++;
    }
    printf("%d\n",count);

    return 0;
}
