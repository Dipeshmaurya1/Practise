#include<iostream>
#include<iomanip>
using namespace std;

class Seconds
{
	public:
	int h,m,s,rs;
	void input()
	{
		cout<<"Enter Seconds: ";
		cin>> s;
	}
	void output()
	{
		h= s/3600;
		m=(s%3600)/60;
		rs=s%60;
		cout<<setfill('0')<<setw(2)<<h<<":";
		cout<<setfill('0')<<setw(2)<<m<<":";
		cout<<setfill('0')<<setw(2)<<rs;
	}
};
int main()
{
	Seconds s1;
	s1.input();
	s1.output();
	
	return 0;
}