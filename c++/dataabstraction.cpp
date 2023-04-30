#include<iostream>
using namespace std;

class Rahil{
	private:
		int a,b;
		
	public:
		void getdata(int x,int y)
		{
			a=x;
			b=y;
			
		}
		
		void display()
		{
			cout<<"value of a = "<<a<<endl;
			cout<<"value of b = "<<b<<endl;
		}
		void add()
		{
			cout<<"After addition of a & b = "<<a+b;
		}
};

int main()
{
	Rahil r1;
	r1.getdata(20,20);
	r1.display();
	r1.add();
}
