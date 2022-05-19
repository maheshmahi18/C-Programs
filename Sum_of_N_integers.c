#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter n value : ");
    scanf("%d", &n);
    int currNum, sum=0;
    for(int ctr=1; ctr<=n; ctr++)
    {
        printf("Enter n number to summation : ");
        scanf("%d", &currNum);
        sum=sum+currNum;
    }
    printf("Total sum : %d", sum);

    return 0;
}
