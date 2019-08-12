#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
	int a[10],b[10],i,j;
	cout<<"Enter array"<<endl;
	for(i=0;i<=9;i++)
		cin>>a[i];
	cout<<"Enter user array"<<endl;
	for(j=0;j<=9;j++)
		cin>>b[j];
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			if(a[i]==b[j])
			{
			 cout<<a[j]<<endl<<"POSITION"<<i<<endl;
			}
		}
	}
}
