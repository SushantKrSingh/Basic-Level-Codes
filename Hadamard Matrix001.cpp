#include <iostream>
using namespace std;
int main()
{
    int p,n=1;
    cout<<"Enter the power of 2 : ";
    cin>>p;
    for(int i=0;i<p;i++)
    {
        n*=2;
    }
    int a[n][n];
    a[0][0]=1;
    for(int i=1;i<n;i+=i)
    {
        for(int j=0;j<i;j++)
        {
            for(int k=0;k<i;k++)
            {
                a[j+i][k]=a[j][k];
                a[j][k+i]=a[j][k];
                if(a[j][k]==1)
                {
                    a[j+i][k+i]=;
                }
                else
                {
                    a[j+i][k+i]= * ;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
