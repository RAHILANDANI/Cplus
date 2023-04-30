#include<iostream>
using namespace std;

class Rahil{
	public:
	virtual void R()
	{
		cout<<"This is abstract class"<<endl;
	}
};

class Ra:public Rahil{
	public:
		void R()
		{
			cout<<"This is simple class";
		}
};

int main()
{
	Ra r;
	Rahil r1;
	r1.R();
	r.R();
}

