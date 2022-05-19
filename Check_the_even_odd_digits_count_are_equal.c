#include <stdio.h>
#include <stdio.h>

int main()
{
   int N;
   printf("Enter a number : ");
   scanf("%d", &N);
   int oddCtr = 0, evenCtr = 0;
   while(N > 0)
   {
       if(N % 2 == 0)
       {
           evenCtr++;
       }
       else
       {
           oddCtr++;
       }
       N = N / 10;
   }
   printf(oddCtr == evenCtr ? "Yes, the count of even and odd digits are same" : "No, the count of even and odd digits are not same");
   
   return 0;
}
