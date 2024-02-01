#include<iostream>
using namespace std;

main()
{
	int i,n;
	start:
	cout<<endl<<"Enter Table: ";
	cin>> n;
	
	for(i=1;i<=10;i++)
	{
		cout<< n <<"X" << i <<"="<< (n*i) <<endl;
	}
	goto start;
}