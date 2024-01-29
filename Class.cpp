#include<iostream>
using namespace std;

class Math
{
	public :
	int num1,num2;
	private :
	int sum;
	public: 
	void User_input()
	{
		cout<<"Enter Value of Num1: ";
		cin>> num1;
		cout<<"Enter Value of Num2: ";
		cin>> num2;
	}
	void Addition()
	{
		sum= num1+num2;
		cout<<" Addition is: "<<sum<<endl;
	}
};

int main()
{
	
	while(1)
	{
		
	class Math m1;
	m1.User_input();
	m1.Addition();
	
	return 0;
	}
}