#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double a, cu, cur;
	cout<<"Enter the no.";
	cin>>a;
	cu=pow(a,3);
	cur=pow(a,0.333333333333333333333333333333333333333333333333333333333333333333333333);
	cout<<"the cube of the given no. is:";
	cout<<cu;
	cout<<"\n";
	cout<<"the cube root of the given no. is:"<<cur;
	
	return 0;
}
