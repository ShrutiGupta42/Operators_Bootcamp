#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter the no.";
	cin>>a;
	(a%4==0 || a%5==0 || a%6==0)?cout<<"condition is satisfied":cout<<"condition is not satisfied";
	
	return 0;
}
