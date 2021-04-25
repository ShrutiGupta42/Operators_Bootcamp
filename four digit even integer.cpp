#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter the no.";
	cin>>a;
	(a>=1000 && a<=9999 && a%2==0)?cout<<"the given no. is four digit even integer":cout<<"not a valid no.";
	
	return 0;
}
