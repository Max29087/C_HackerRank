#include <stdio.h>
#include <math.h>
void update(int *a, int *b)
{
    int c;
    int d;
    c = *a + *b;
    if (*a > *b)
    {
        d = *a - *b;
    }
    else
    {
        d = *b - *a;
    }
    *a=c;
    *b=d;
}
int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d%d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);
    return 0;
}
