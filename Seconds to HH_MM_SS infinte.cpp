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
		if(s<=0)
		{
			cout<<"Enter second Higher than 0 !!"<<endl<<endl;
		}
		else
		{
			h= s/3600;
			m=(s%3600)/60;
			rs=s%60;
			cout<<"Time is: ";
			cout<<setfill('0')<<setw(2)<<h<<":";
			cout<<setfill('0')<<setw(2)<<m<<":";
			cout<<setfill('0')<<setw(2)<<rs<<endl<<endl;
		}
	}
};
int main()
{
	start:
	Seconds s1;
	s1.input();
	s1.output();
	goto start;
	return 0;
}