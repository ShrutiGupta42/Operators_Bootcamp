#include<iostream>
using namespace std;

int main()
{
	char a;
	cout<<"enter the character:";
	cin>>a;
	(a>='A' && a<='Z' )? cout<<"upper":cout<<"not a valid";
	
	return 0;
}

