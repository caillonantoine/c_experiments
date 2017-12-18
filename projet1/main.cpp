#include <iostream>
#include <valarray>
//#include "dot.hpp"

using namespace std;

int dot(valarray<int> const& x,valarray<int> const& y,int N)
{
	int output=0;
	for (int i=0; i<N; i++)
	{
		output += x[i] * y[i];
	}
	return output;
}

int main()
{
	valarray<int> x(5,1);
	valarray<int> y(5,2);
	int o = dot(x,y,5);
	cout << o << endl;
	return 0;
}
