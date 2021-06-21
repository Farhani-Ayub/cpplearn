#include <iostream>

using namespace std;

double multiply(int x, int n)
{
	x = 21;
	n = 5;
	return x*n;
}

int main()
{
	cout<<multiply(2,3)<<endl;
	return 0;
}