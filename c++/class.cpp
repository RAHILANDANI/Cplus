#include<iostream>
using namespace std;

class large
{
	private:
		int a,b;
	public:
		void getdata()
		{
			cout<<"Enter the value of a = ";
			cin>>a;
			cout<<"Enter the value of b = ";
			cin>>b;
		}
		void largest()
		{
			if(a>b)
			{
				cout<<"a is bigger";
			}
			else
			{
				cout<<"b is bigger";
			}
		}
		void display()
		{
			cout<<" ";largest();
		}
};

int main()
{
	large l1;
	l1.getdata();
	l1.display();
}
