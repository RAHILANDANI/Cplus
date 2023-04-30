#include<iostream>
using namespace std;

void A(int);
void A(float);
void A(int,float);

void A(int x)
{
	cout<<"The value of integer is = "<<x<<endl;
}

void A(float y)
{
	cout<<"The value of Float is = "<<y<<endl;
}

void A(int x,float y)
{
	cout<<"The value of integer is = "<<x;
	cout<<"  And Float value is = "<<y;
}

int main()
{
	int a=5;
	float b=1.55;
	
	A(a);
	A(b);
	A(a,b);
	
	return 0;
	
}
