#include<iostream>
using namespace std;

class A
{
	public:
		int a ;
			void set1()
			{
				cout << endl << "Enter value of A :- " ;
				cin >> a ; 
			}
};

class B : public A
{
	public:
		int b ;
			void set2()
			{
				cout << endl << "Enter value of B :- " ;
				cin >> b ; 
			}
};

class C : public A
{
	public:
		int c ;
			void set3()
			{
				cout << endl << "Enter value of C :- " ;
				cin >> c ; 
			}
};

class D : public B , public C
{
	public:
		int d , sum ;
			void set4()
			{
				cout << endl << "Enter value of D :- " ;
				cin >> d ; 
				
				sum	= B::a + b + c + d ;
				
				cout << endl << "Sum of all numbers :- " << sum ;
			}
};

int main()
{
	D obj ;
	
	obj.B::set1() ;
	obj.set2() ;
	obj.set3() ;
	obj.set4() ;
	
	return 0 ;
}
