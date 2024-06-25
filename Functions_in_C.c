#include <stdio.h>
int max_of_four(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
    {
        return a;
    }
    else if (b > c && b > d)
    {
        return b;
    }
    else if (c > d)
    {
        return c;
    }
    else
    {
        return d;
    }
}
int main()
{
    int n1, n2, n3, n4;
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
    printf("%d\n", max_of_four(n1, n2, n3, n4));
    return 0;
}
