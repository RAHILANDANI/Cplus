#include<iostream>
using namespace std;

class Rahil{
	int a,b;
	public:
		Rahil()
		{
			cout<<"Enter the value of a = ";
			cin>>a;
			cout<<"Enter the value of b = ";
			cin>>b;
		}
		void add()
		{
			cout<<"The value of addition is = "<<a+b;
		}
		~Rahil()
		{
			
		}
};
int main()
{
	Rahil r1;
	r1.add();
}
