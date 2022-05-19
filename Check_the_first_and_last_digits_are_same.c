#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("Enter a number : ");
    scanf("%d", &N);
    int lastDigit = N % 10;
    while(N > 9)
    {
        N = N / 10;
    }
    if(N == lastDigit)
    {
        printf("Yes the first and last digits are same");
    }
    else
    {
        printf("No the first and last digits are not same");
    }

    return 0;
}
