#include <stdio.h>
int main()
{
    long long num;
    int count = 0;
    printf("integer: ");
    scanf("%lld", &num);
    while(num != 0)
    {
        num /= 10;
        ++count;
    }
    printf("digits: %d", count);
}
