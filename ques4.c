#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int arr[n],max,i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    max=max+1;
    int b[max];
    for(i=0;i<max;i++)
        b[i]=0;
    for(i=0;i<n;i++)
        b[arr[i]]+=1;
    for(i=0;i<max;i++)
    {
        if(b[i]==1)
            printf("%d",i);
    }
}
