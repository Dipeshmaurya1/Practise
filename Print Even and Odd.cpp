#include<iostream>
using namespace std;

main()
{
	int s,e,i;
	cout<<"Enter The Starting Value: ";
	cin>> s;
	cout<<"Enter The Ending Value: ";
	cin>> e;
	
	cout<<"Even Values Are: ";
	for(i=s;i<e;i++)
	{
		if(i%2==0)
		{
			cout<< i <<",";
		}
	}
	cout<<endl<<"Odd Values Are: ";
	for(i=s;i<e;i++)
	{
		if(i%2!=0)
		{
			cout<< i <<",";
		}
	}
}