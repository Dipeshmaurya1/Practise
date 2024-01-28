#include<iostream>
using namespace std;

main()
{
	int n=1,g=1;
	int i,j,k;
	
	for(i=1;i<=10;i++)
	{
		for(k=1;k<i;k++)
		{
			cout<<"-  ";
		}
		for(j=i;j<=k;j++)
		{
			cout<< n<<"   ";
			n= n+j;
		}
		for(j=9; j>=i;j--)
		{
			cout<< n<<"   ";
			n= n+j;
		}
		g+=1;
		n= g+i;
		cout<<endl;
	}
}