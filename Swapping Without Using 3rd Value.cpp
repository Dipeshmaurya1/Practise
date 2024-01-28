#include<iostream>
using namespace std;

main()
{
	int a,b;
	
	cout<< "Enter The Value of A:";
	cin>> a;
	cout<< "Enter The Value of B:";
	cin>> b;
	a=a*b;
	b=a/b;
	a=a/b;
	cout<<"After Swapping A: "<<a<<endl;
	cout<<"After Swapping B:"<<b;
}