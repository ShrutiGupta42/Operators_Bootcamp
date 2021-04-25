#include<iostream>
using namespace std;

int main()
{
	char a;
	cout<<"enter the character:";
	cin>>a;
	(a>='a' && a<='z')?cout<<"it is a lower case":cout<<"not a valid character";
	
	return 0;
}
