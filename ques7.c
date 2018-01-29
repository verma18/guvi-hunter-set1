#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if((arr[i]%2==0 && i%2!=0) ||(arr[i]%2!=0 && i%2==0) )
            printf("%d ",arr[i]);
    }

}
