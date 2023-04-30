 #include<iostream>
using namespace std;

class rahil{

	public:
		int no1=10,no2=20;	
		
		friend int display();

};


int display(rahil r)
		{
			cout<<"Value of A: "<<r.no1<<endl;
			cout<<"Value of B: "<<r.no2;
		}


int main()
{
	rahil rk;	
	display(rk);
	
}
