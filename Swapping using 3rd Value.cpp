#include<iostream>
using namespace std;

main()
{
	int a,b,c;
	
	cout<< "Enter The Value of A:";
	cin>> a;
	cout<< "Enter The Value of B:";
	cin>> b;
	c=a;
	a=b;
	b=c;
	cout<<"After Swapping A: "<<a<<endl;
	cout<<"After Swapping B: "<<c;
}