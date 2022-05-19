#include <stdio.h>

int main()
{
    int N, sum=0;
    printf("Enter a nummber : ");
    scanf("%d", &N);
    while(N > 0)
    {
        if(N%2 == 0)
        {
            sum = sum + N%10;
        }
        N = N/10;
    }
    printf("Sum of even digits of a given number : %d", sum);

    return 0;
}
