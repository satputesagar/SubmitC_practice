#include<stdio.h>

int main()
{
    int a[5]; // array dec 20bytes

    int i;
    printf("Enter any 5 values.\n");
    for(i=0;i<5;i++)
    {
      scanf("%d",&a[i]);
    }
    printf("The data is: \n");
    for(i=4;i>=0;i--)
    {
        a[i]=a[i]*2;
      printf("%d ",a[i]);
    }

    return 0;
}
