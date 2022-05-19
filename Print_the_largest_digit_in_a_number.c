#include <stdio.h>

int main()
{
    int N;
    printf("Enter a number : ");
    scanf("%d", &N);
    int max = N%10;
    N /= 10;
    while(N > 0)
    {
        if(N%10 > max)
        {
            max = N%10;
        }
        N /= 10;
    }
    printf("\nIn that number the largest digit is : %d", max);

    return 0;
}