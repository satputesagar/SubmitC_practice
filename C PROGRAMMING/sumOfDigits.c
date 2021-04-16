#include<stdio.h>
int  SumOfDigit(int n)
 {
     int sum;
    //base case
    if(n==0)
       return 0;
    else
    return( n % 10 +SumOfDigit(n / 10));

 }

int main()
{
    int n,sum;
    scanf("%d",&n);
    sum=SumOfDigit(n);
    printf("%d",sum);
    return 0;
}
