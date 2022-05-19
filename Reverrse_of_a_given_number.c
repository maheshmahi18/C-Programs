#include <stdio.h>

int main()
{
    int N;
    printf("Enter a number : ");
    scanf("%d", &N);
    int rev = 0;
    while(N > 0)
    {
        rev = rev * 10;
        rev = rev + N%10;
        N = N / 10;
    }
    printf("\nReverse of the given number : %d", rev);

    return 0;
}
