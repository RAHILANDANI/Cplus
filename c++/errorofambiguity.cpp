#include<iostream>
using namespace std;

class A{
	public:
	void display()
	{
		cout<<"This is class A"<<endl;
	}
};
class B{

	public:
	void display()
	{
		cout<<"This is class B"<<endl;
	}
};

class C:public A,public B{
	
};

int main()
{
	C c;
	c.A::display();
	c.B::display();
}
