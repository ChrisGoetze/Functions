#include <iostream>
void myfunction(int parameter_value, int& p2_ref);
int main()
{
	using namespace std;
	int n1, n2;
	
	n1 = 1;
	n2 = 2;
	myfunction(n1, n2);
	cout << "n1 after function call = " <<n1<< endl;
	cout << "n2 after function call = " <<n2<< endl;
	return 0;
}
void myfunction(int parameter_value, int& p2_ref)
{
	using namespace std;
	parameter_value = 111;
	cout << "parameter value in function call = " << parameter_value << endl;
	p2_ref = 222;
	cout << "second parameter value in function call = " << p2_ref << endl;
}