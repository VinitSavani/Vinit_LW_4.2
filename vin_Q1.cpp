#include<iostream>
using namespace std;

class RBI 
{
	public:
		double a;
		set(double a)
		{
			this-> a = a ;
		}
				
};

class SBI : public RBI 
{
	public:
		float b , i ;
		void getRoi()
		{
			cout << endl << "Enter intrest rate of SBI :- " ;
			cin >> b ;
			
			i = (( a * b ) / 100 ) + a ;
			
			cout << endl << "Amount with intreast SBI = " << i ;
		}
};

class BOB : public RBI 
{
	public:
		float c , j ;
		void getRoi()
		{
			cout << endl << "Enter intrest rate of BOB :- " ;
			cin >> c ;
			
			j = (( a * c ) / 100 ) + a ;
			
			cout << endl << "Amount with intreast BOB = " << j ;
		}
};

class ICICI : public RBI 
{
	public:
		float d , k ;
		void getRoi()
		{
			cout << endl << "Enter intrest rate of ICICI :- " ;
			cin >> d ;
			
			k = (( a * d ) / 100 ) + a ;
			
			cout << endl << "Amount with intreast ICICI " << k ;
		}
};

int main()
{
	
	double i;
	
	cout << endl << "Enter Amount :- " ;
	cin >> i ;
	
	SBI p;
	BOB q;
	ICICI r;
	
	p.set(i);
	p.getRoi();
	
	q.set(i);
	q.getRoi();
	
	r.set(i);
	r.getRoi();
	
	return 0;
}
