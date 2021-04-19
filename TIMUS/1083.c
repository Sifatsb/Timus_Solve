#include<stdio.h>
#include<string.h>

int main()
{
    int n, i, sum = 1, ln;
    char str[25];

    scanf("%d",&n);
    getchar();
    gets(str);
    ln = strlen(str);

    for(i = n; i > 0; )
    {
        sum *= i;
        i = i-ln;
    }
    printf("%d\n",sum);

    return 0;
}
