#include<iostream>
using namespace std;

inline fact(int x){
	int a;
	if(x>1)
	{
		return x*fact(x-1);
    }
	else
	{
		return 1;
	}
};

int main()
{
	int a;
	cout<<"Enter the value of a = ";
	cin>>a;
	
	cout<<"Factorial is = "<<fact(a);
	
}
