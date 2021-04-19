#include<stdio.h>
#include<string.h>

int fact(int n, char str[])
{
    int i, sum = 1, ln;

    ln = strlen(str);
    for(i = n; i > 0; )
    {
        sum *= i;
        i = i-ln;
    }
    return sum;
}

int main()
{
    int n, s, ln;
    char str[25];

    scanf("%d",&n);
    getchar();
    gets(str);


    s = fact(n,str);


    printf("%d\n",s);

    return 0;
}
