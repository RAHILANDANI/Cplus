#include<iostream>
using namespace std;

int fact(int x);

int main()
{
	int a;
	cout<<"Enter the value of a = ";
	cin>>a;
	cout<<"Factorial is == "<<fact(a);
	
}
int fact(int x)
{
	if(x>1)
	{
		return x*fact(x-1);
	}
	else
	{
		return 1;
	}
}
