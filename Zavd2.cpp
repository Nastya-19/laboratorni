#include <iostream>
using namespace std;

int main () 
{
	setlocale(0,"");
	int a, b ;
	cout << "ax + b = 0\n" ;
	cout << "¬ведите а :" ;
	cin >> a ;
	cout << "¬ведите b :\n" ;
	cin >> b ;
	int x = -b/a ;
	cout << "x = " << x << endl ;

	return 0;
}
