#include<iostream>
using namespace std;

main()
{
	FILE *even;
	FILE *odd;
	even= fopen("Even Values.txt","w");
	odd= fopen("Odd Values.txt","w");
	
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
			fprintf(even,"Even Values: %d\n",i);
			cout<< i <<",";
		}
	}
	cout<<endl<<"Odd Values Are: ";
	for(i=s;i<e;i++)
	{
		if(i%2!=0)
		{
			fprintf(odd,"Odd Values: %d\n",i);
			cout<< i <<",";
		}
	}
}