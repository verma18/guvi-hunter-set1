#include<stdio.h>
#include<math.h>
void main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,neg=0,pos=0,min,min2,max,count=0;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
            neg++;

        else
            pos++;
    }
    //printf("\n%d %d",neg,pos);
    int a[pos],b[neg],j=0,k=0;
   if(neg>0 && pos>0)
    {for(i=0;i<n;i++)
    {if(arr[i]<0)
    {b[j]=arr[i];
    j++;

    }
    else{
        a[k]=arr[i];
        k++;
    }
    }
    for(j=0;j<pos;j++)
    {
        if(a[j]==0)
            count++;
        if(count==2)
        {
           printf("0 0");

            break;

    }}
    if(j==pos){
    for(i=0;i<neg;i++)
    {
        for(j=0;j<pos;j++)
        {
            if(abs(b[i])==abs(a[j]))
              {

                printf("%d %d",b[i],a[j]);
            break;
        }
    }}
    if(i==neg && j==pos)
    {max=b[0];
        for(i=0;i<neg;i++)
        {
            if(b[i]>max)
                max=b[i];
        }
        min=a[0];
        for(i=0;i<pos;i++)
        {
            if(min>a[i])
                min=a[i];
        }
        printf("%d %d",max,min);
    }}
    }
    else
        printf(" array does not contain positive as well as negative");

    }


