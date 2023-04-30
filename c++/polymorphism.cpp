#include<iostream>
using namespace std;

class Rahil{

	public:
		void fun(int x)
			{
				cout<<"The value of x is = "<<x<<endl;
			}
		void fun(double x)
		{
			cout<<"The value of x is = "<<x<<endl;
		}
		void fun(double x,int y)
		{
			cout<<"The value of x and y is = " << x << "," << y <<endl;
		}
};
int main()
{
	Rahil r1;
	
	r1.fun(5);
	r1.fun(1.2123);
	r1.fun(1.09222,1.0050);
	r1.fun(32,52);
}
