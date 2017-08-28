#include <stdio.h>
int main()
{
    char new;
    printf("Enter a character: ");
    scanf("%c",&new);

    if( (new>='a' && new<='z') || (new>='A' && new<='Z'))
        printf("%c alphabet.",new);
    else
        printf("%c not an alphabet.",new);

    return 0;
}
