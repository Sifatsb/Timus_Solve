/*#include<stdio.h>
#include<math.h>

int main()
{
    int n, i;
    double sum = 0.0, r, a, b, ans, pi;
    pi = 2 * acos(0.0);
    scanf("%d %lf",&n, &r);
    ans = 2 * r * pi;

    for(i = 0; i < n; i++)
    {
        scanf("%lf %lf",&a, &b);
        sum += a + b;
    }
    printf("%.2lf\n",sum+ans);

    return 0;
}
*/

/*#include <stdio.h>
#include <math.h>
#define PI acos(-1)
struct c
{
    double a, b;
};
int main()
{
    struct c array[1000];
    int n,r,i;
    double sum =0;
    scanf("%d %d",&n,&r);
    for(i=0; i<n; i++)
    {
        scanf("%lf %lf",&array[i].a,&array[i].b);

    }
    sum =sqrt(pow(array[n-1].a-array[0].a,2)+pow(array[n-1].b-array[0].b,2));
    for(i=0; i<n-1; i++)
    {
        sum +=sqrt(pow(array[i+1].a-array[i].a,2)+pow(array[i+1].b-array[i].b,2));
    }
    printf("%.2lf\n",sum+2*PI*r);


    return 0;
}
*/
#include <stdio.h>
#include <math.h>

double x[100], y[100];

double length(int i, int j)
{
    return sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
}

int main()
{
    int n, i;
    double r, ans;

    scanf("%d %lf",&n, &r);

    for(i = 0; i < n; i++) scanf("%lf %lf",&x[i], &y[i]);

    ans = 2 * acos(-1.0) * r + length(n-1,0);

    for(i = 1; i < n; ++i) ans += length(i-1,i);

    printf("%.2lf\n",ans);

    return 0;
}
