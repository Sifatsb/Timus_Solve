#include <stdio.h>


int main()
{
    int n, a[105], s=0, i;
    scanf("%d", &n);
    int num = (n+1)/2;
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    sort (a, a+n);
    for(i=0; i<num; i++) s += (a[i]+1)/2;
    printf("%d\n", s);
    return 0;
}
