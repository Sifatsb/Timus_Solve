/*#include<stdio.h>
int main()
{
    long long int i, j, x, test, sum;
    scanf("%lld",&test);

    while(test--)
    {
        scanf("%lld",&x);
        sum = 1;
        for(i = 1; sum < x; i++)
        {
            sum = sum + i;
        }
        if(sum == x)
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }

    }
}


#include <stdio.h>
#include <math.h>

int main()
{
    int n, k, i;
    long long t;
    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&k);
        t = (long long)sqrt((unsigned int)(k-1)*2);

        if(t * (t+1) / 2+1 == k)printf("1 ");
        else printf("0 ");
    }
}
*/

#include<stdio.h>
#include<math.h>

int main()
{
    unsigned long long int p, iv, tc, result;
    double fv;
    scanf("%llu",&tc);

    while(tc--)
    {
        scanf("%llu",&p);
        fv = sqrt(8*p - 7);
        iv =  fv;
        if(iv == fv)printf("1 ");
        else printf("0 ");
    }

    return 0;
}
