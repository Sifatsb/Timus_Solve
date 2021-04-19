#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n, a[105], s = 0;
    scanf("%d", &n);

    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    sort (a, a+n);
    for(int i=0; i<n; i++) printf("%d", a[i]);
    for(int i = 0; i < (n+1)/2 ; i++) s += (a[i]+1)/2;

    printf("\n%d\n", s);

    return 0;
}
