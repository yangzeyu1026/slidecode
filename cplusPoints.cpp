#include <iostream>

using namespace std;

int main()
{
	int *p = new int(10);
	cout<<"The number pointer p points is "<<*p<<endl;

	double *u = new double[3];
	u[0]=2.3;
	u[1]=1.5;
	u[2]=5.3;
	for (int i = 0; i < 3; i++)
	{
		cout<<*(u+i)<<endl;
	}

	delete p;
	delete u;

	return 0;
}