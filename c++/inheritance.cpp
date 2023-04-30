#include<iostream>
using namespace std;

class base{
	protected:
		int a,b;
	public:
		void getdata()
		{
			cout<<"Enter the value of a = ";
			cin>>a;
			cout<<"Enter the value of b = ";
			cin>>b;	
		}
};
class derived:public base{
	public:
		void add()
		{
		cout<<"The addition of a and b is = "<<a+b<<endl;
		}
};

int main()
{
	derived d1;
	d1.getdata();
	d1.add();
	
}
