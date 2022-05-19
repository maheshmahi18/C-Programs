#include <stdio.h>

int main()
{
    int N;
    printf("Enter a number : ");
    scanf("%d", &N);
    int min = N%10;
    N /= 10;
    while(N > 0)
    {
        if(N%10 < min)
        {
            min = N%10;
        }
        N = N/10;
    }
    printf("Smallest digit is : %d of the given nummber", min);

    return 0;
}
