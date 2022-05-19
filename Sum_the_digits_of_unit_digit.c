#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, num, sum=0;
    printf("Enter n value : ");
    scanf("%d", &n);
    for(int ctr=1; ctr<=n; ctr++)
    {
        scanf("%d", &num);
        sum=sum+(num*2)%10;
    }
    printf("Sum of the numbers of unit digits is : %d", sum);
    
    return 0;
}
