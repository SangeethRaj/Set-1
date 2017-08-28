#include <stdio.h>
int main()
{
    char new;
    printf("Enter a character: ");
    scanf("%c",&new);

    if( (new>='a' && new<='z') || (new>='A' && new<='Z'))
        printf("%c is an alphabet.",new);
    else
        printf("%c is not an alphabet.",new);

    return 0;
}
