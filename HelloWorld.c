#include<stdio.h>
int main()
{
    char s[100];
    //fgets(s,100,stdin);
    scanf("%[^\n]%*c",s);
    printf("Hello, World!\n%s\n",s);
    return 0;
}
