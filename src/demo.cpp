#include <iostream>
#include "../mylib/mymath.h"
using namespace std;

int main(int argc,char *argv[])
{

	int a = 10;
	int b = 11;

	cout << a * b << endl;
	if(argc<3)
	{
		cout<<"Usage:"<<argv[0]<<endl;
		return 1;
	}
	double base =atof(argv[1]);
	int exponent=atoi(argv[2]);
	cout<<"result"<<endl<<power(base,exponent);
	return 0;
}