#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int max,i,arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    max++;
    int b[max];
    for(i=0;i<max;i++)
        b[i]=0;
    for(i=0;i<n;i++)
    {
        b[arr[i]]=b[arr[i]]+1;
        if(b[arr[i]]>1)
        {
            printf("%d",arr[i]);
            break;
        }
    }

}
