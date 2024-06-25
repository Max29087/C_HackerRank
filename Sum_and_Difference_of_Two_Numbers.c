#include <stdio.h>
int main()
{
    int n1, n2;

    float n3, n4;

    scanf("%d%d", &n1, &n2);

    scanf("%f%f", &n3, &n4);

    printf("%d ", n1 + n2);
    printf("%d", n1 - n2);

    printf("\n");

    printf("%.1f ", n3 + n4);
    printf("%.1f", n3 - n4);
    printf("\n");
    return 0;
}
