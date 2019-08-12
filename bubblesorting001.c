#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i=0,j=0,k=0,flag=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int x[n];
    printf("Enter %d space-separated integers: \n",n);
    while (i < n && scanf("%d", &x[i]) == 1)
    {
        i++;
    }
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(x[j]>x[j+1])
            {
                int t=x[j];
                x[j]=x[j+1];
                x[j+1]=t;
                flag=1;
                for(k=0;k<n;k++)
                {
                    printf("%d ",x[k]);
                }
                printf("\n");
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    return 0;
}
