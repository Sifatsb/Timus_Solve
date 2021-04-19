#include <stdio.h>
#include <math.h>
int main()
{
    int n,k,i;
    long long t;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&k);
        t=(long long)sqrt((unsigned int)(k-1)*2);
        if(t*(t+1)/2+1==k)printf("1 ");
        else printf("0 ");
    }
}
