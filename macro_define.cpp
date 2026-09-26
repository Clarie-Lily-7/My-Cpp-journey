#include <iostream>
#define CIR(r) r*r
#define TEST
using namespace std;

int main()
{
	int x=1;
	int y=2;
	int z;
	z=CIR(x+y);
	cout<<"CIR(x+y)= "<<z<<endl;
	#ifdef TEST
	cout<<"x= "<<x<<"\t"<<"y= "<<y<<endl;
	#endif
	cout<<"z= "<<z<<endl;
	

	return 0;
}
