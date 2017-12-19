#include <iostream>

extern "C" void fonction_test(int* x, int* y, int* out);

using namespace std;

int main()
{
	int x(5);
	int y(6);
	int out(0);
	fonction_test(&x,&y,&out);
	cout << "Resultat " << out << endl;
	return 0;
}
