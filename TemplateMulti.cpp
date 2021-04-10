#include<iostream> 
using namespace std; 

template<class T1, class T2> 

class Test 
{ 
		T1 a; 
		T2 b; 
	public: 
		Test(T1 x, T2 y) 
		{ 
			a = x; 
			b = y; 
		} 
		void show() 
		{ 
			cout << a << " and " << b << endl; 
		} 
}; 
 
int main() 
{ 
	int w,x;
	float y;
	char z;
	cout<<"\n Enter Float and Integer Value : ";
	cin>>y>>x;
	cout<<"\n Enter Integer and Character Value : ";
	cin>>w>>z;
	Test <float, int> test1 (x,y);  
	Test <int, char> test2 (w,z); 
	test1.show(); 
	test2.show(); 
	return 0; 
} 

