#include<iostream>
using namespace std;

class R{
	protected:
		int a,b;
		
	public:
		void getdata();
		
		void add()
		{
			cout<<"the addition of a and b is = "<<a+b;
		}
};

void R::getdata()
		{
			cout<<"Enter the value of a = ";
			cin>>a;
			cout<<"Enter the value of b = ";
			cin>>b;
		}
int main()
{
	R r1;
	r1.getdata();
	r1.add();
}
