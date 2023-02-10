#include<stdio.h>
int main()
{
    int n, i, j, sum=0, average;
    for(i=1; i<=10; i++)
    {
        printf("Enter %d number:",i);
        scanf("%d",&n);
        sum+=n;
    }
    average=sum/10;
    printf("Sum=%d\n",sum);
    printf("Average=%d",average);
    return 0;
}
