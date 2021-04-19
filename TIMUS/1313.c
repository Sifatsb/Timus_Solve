/*#include <stdio.h>

int main()
{
    int x[100][100], a, i, j;
    scanf("%d",&a);

    for( i = 0 ; i < a ; i++ )
        for( j = 0 ; j < a ; j++ )
            scanf("%d",&x[i][j]);

    for( i = 0 ; i < a ; i++ )
        for( j = 0 ; j <= i ; j++ )
            printf("%d ",x[i-j][j]);

    for( i = a ; i < 2 * a - 1 ; i++ )
        for( j = a - 1 ; j >= i - (a-1) ; j-- )
            printf("%d ",x[j][i-j]);

    return 0;
}



#include<stdio.h>

int ar[100050];
int main()
{
    int i, pos, n;
    scanf("%d", &n);

    for(i = 1; i <= n*n; i++)
    {
        scanf("%d", &pos);
        ar[pos] = pos;
    }
    for(i = 1; i <= n*n; i++) printf("%d ",ar[i]);
    printf("\n");

    return 0;
}
*/

/*#include<stdio.h>

int ar[102][102];
int main()
{
    int n, i, j, i1, j1;
    scanf("%d", &n);
    int ar[n][n];

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++) scanf("%d", &ar[i][j]);
    }

    for(i = 1; i <= n; i++)
    {
        i1 = i, j1 = 1;
        while(i1 >= 1 && i1 <= n)
        {
            printf("%d ", ar[i1][j1]);
            i1--;
            j1++;
        }
    }

    for(i = 1; i <= n; i++)
    {
        i1 = n, j1 = i+1;
        while(j1 >= 1 && j1 <= n)
        {
            printf("%d ", ar[i1][j1]);
            i1--;
            j1++;
        }
    }
    printf("\n");

    return 0;
}
*/

#include<stdio.h>

int main()
{
    int n, i, j, i1, j1;
    scanf("%d", &n);
    int ar[n+5][n+5];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++) scanf("%d", &ar[i][j]);
    }

    for(i = 0; i < n; i++)
    {
        i1 = i, j1 = 0;
        while(i1 >= 0 && i1 < n)
        {
            printf("%d ", ar[i1][j1]);
            i1--;
            j1++;
        }
    }

    for(i = 0; i < n; i++)
    {
        i1 = n-1, j1 = i+1;
        while(j1 >= 0 && j1 < n)
        {
            printf("%d ", ar[i1][j1]);
            i1--;
            j1++;
        }
    }
    printf("\n");

    return 0;
}
