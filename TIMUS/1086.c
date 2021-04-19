/*#include<stdio.h>

int main()
{
    int n, tc, i, flag = 0, p = 0;
    scanf("%d",&tc);

    while(tc--)
    {
        scanf("%d",&n);

        for(i = 2; i < n/2; i++)
        {
            if(n % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0) printf("posi %d Prime\n", i);
        else printf("Not prime\n");
    }

    return 0;
}

#include<stdio.h>

int main()
{
    int i = 2, j, n, flag, count = 0, tc;

    while(i != 0)
    {
        flag = 0;
        for(j = 2; j < i; j++)
        {
            if(i % j == 0) flag++;
        }
        if(flag == 0 && count < n) count++;

        if(count == n) break;
        i++;

        printf("%d\n",count);
    }
    //cout<<"Prime Number found at Index "<<n<<" is :"<<i<<endl;
    return 0;
}
*/


#include <stdio.h>

int pos[16400];
long long int prime[170000];

int main()
{
    int number, i, j, tc, p;

    for(i = 2; i <= 170000; i++) prime[i] = i;

    i = 2;
    while((i*i) <= 170000)
    {
        if (prime[i] != 0)
        {
            for(j=2; j<170000; j++)
            {
                if (prime[i]*j > 170000) break;
                else prime[prime[i]*j] = 0;
            }
        }
        i++;
    }

    for(i = 2, j = 0; i <= 170000; i++)
        {
            if(prime[i] != 0)
            {
                pos[j] = prime[i];
                j++;
            }
        }

    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d", &p);
        printf("%d\n",pos[p-1]);
    }

    return 0;
}
