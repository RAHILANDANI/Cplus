#include<iostream>
using namespace std;

class base{
	protected:
		int a,b;
	public:
		void getdata()
		{
			cout<<"Enter the no. of a = ";
			cin>>a;
			
		}
};
class derived:public base{
	public:
		void display()
		{
				cout<<"Enter the no. of b = ";
				cin>>b;
		}
};
class Rahil:public derived{
	public:
		void add()
		{
			cout<<"The addition of a and b is = "<<a+b;
		}
};

int main()
{
	Rahil R1;
	R1.getdata();
	R1.display();
	R1.add();
}
