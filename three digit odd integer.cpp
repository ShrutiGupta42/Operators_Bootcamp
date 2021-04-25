#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter the no.";
	cin>>a;
	(a>=100 && a<=999 && a%2!=0)?cout<<"the given no. is three digit odd integer":cout<<"not a valid no.";
	
	return 0;
}
