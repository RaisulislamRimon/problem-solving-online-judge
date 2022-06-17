#include <stdio.h>

int main()
{
    char ch;
    scanf("%c" , &ch);

    char s[10000];
    scanf("%s\n", s);

    char sen[10000];
    scanf("%[^\n]%*c", sen);

    printf("%c\n%s\n%s", ch, s, sen);

    return 0;
}