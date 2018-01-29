#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n],count=0;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(i==arr[i])
            printf("%d ",i);
        else{
            count++;
        }
    }
    if(count==n)
        printf("-1");

}
