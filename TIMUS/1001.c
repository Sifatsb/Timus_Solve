/*#include<stdio.h>
#include<math.h>


int main()
{
    double ar[300000];
    unsigned long long int n;
    int  i = 0, count = 0, j;

    while(scanf("%llu",&n) != EOF)
    {
        ar[i] = (double)sqrt(n);
        i++;
        count++;
    }
    for(j = count - 1; j >= 0; j--)
    {
        printf("%.4lf\n",ar[j]);
    }

    return 0;
}*/

#include<stdio.h>
#include<math.h>

int main()
{
	double ar[200000];
    unsigned long long int n;
    int  i = 0, count = 0, j;

    while(scanf("%llu",&n) != EOF)
    {
        ar[i] = (double)sqrt(n);
        i++;
        count++;
    }
    for(j = count - 1; j >= 0; j--)
    {
        printf("%.4lf\n",ar[j]);
    }

    return 0;
}
