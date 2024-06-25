#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 99
int main()
{
    char ch;
    char s[MAX_LEN];
    char sen[100];
    scanf("%c", &ch);
    scanf("%s", s);
    getchar();
    scanf("%[^\n]%*c", sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    return 0;
}
