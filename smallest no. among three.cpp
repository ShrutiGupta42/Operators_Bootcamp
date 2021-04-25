#include<iostream>
using namespace std;

int main()
{
		int a ,b, c, d;
	cout<<"enter a:";
	cin>>a;
	cout<<"enter b:";
	cin>>b;
	cout<<"enter c:";
	cin>>c;
	d=(a < b) ?(a < c ? a : c) :(b < c ? b : c);
	cout<<"the smallest no. is:";
	cout<<d;
	return 0;
}
