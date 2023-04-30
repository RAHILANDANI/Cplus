#include<iostream>
using namespace std;

class A{
	
	public:
		void getdata()
		{
			int a,b;
			cout<<"Enter the no. of a = ";
			cin>>a;
			cout<<"Enter the no. of b = ";
			cin>>b;
			
		}
		friend void F(A ob);
		
		
};

ob::void F(A ob){
	public:
		void display()
		{
			c=ob.a+ob.b;
			cout<<"Your Answer is = "<<c;
		}
	
};

int main()
{
	A ob;
	ob.getdata();
	
	
}
