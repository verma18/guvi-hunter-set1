#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int i,k,z=0,arr[n],j,max,b[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    i=n;
    while(i>=0)
    {max=arr[0];
        for(j=0;j<n;j++)
        {
            if(max<arr[j])
            {
                max=arr[j];
                k=j;
            }
        }
        b[z]=max;
        arr[k]=0;
        z++;
        i--;
    }
    for(i=0;i<n;i++)
        printf("%d",b[i]);
}
