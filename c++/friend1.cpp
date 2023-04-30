 #include<iostream>
using namespace std;

class rahil{

	private:
		int no1=10,no2=20;	
		
		friend class krish;

};
class krish{

	public:
		void display(class rahil r)
		{
			cout<<"Value of A: "<<r.no1<<endl;
			cout<<"Value of B: "<<r.no2;
		}
};

int main()
{
	rahil rr;
	krish kk;
	
	kk.display(rr);
	
}
